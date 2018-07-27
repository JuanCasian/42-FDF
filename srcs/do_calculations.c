/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_calculations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 13:57:20 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/26 16:44:06 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static void	set_separation(t_board **bs)
{
	int i;
	int k;

	i = 0;
	k = 0;
	while (i < bs[ob]->n_rows)
	{
		k = 0;
		while (k < bs[ob]->n_col)
		{
			bs[cb]->pos[i][k].x = bs[ob]->pos[i][k].x * bs[cb]->separator;
			bs[cb]->pos[i][k].y = bs[ob]->pos[i][k].y * bs[cb]->separator;
			bs[cb]->pos[i][k].z = bs[ob]->pos[i][k].z * bs[cb]->z_sep;
			k++;
		}
		i++;
	}
}

static void	rot_z(t_board **bs)
{
	int	i;
	int	k;
	double	x;
	double	y;
	double	rad;

	i = -1;
	rad = bs[cb]->z_angle * (3.14159 / 180);
	while (++i < bs[ob]->n_rows)
	{
		k = -1;
		while (++k < bs[ob]->n_col)
		{
			x = bs[cb]->pos[i][k].x;
			y = bs[cb]->pos[i][k].y;
			bs[cb]->pos[i][k].x = (x * cos(rad)) - (y * sin(rad));
			bs[cb]->pos[i][k].y = (x * sin(rad)) + (y * cos(rad));
		}
	}
}

static void	rot_y(t_board **bs)
{
	int	i;
	int	k;
	double	x;
	double	z;
	double	rad;

	i = -1;
	rad = bs[cb]->y_angle * (3.14159 / 180);
	while (++i < bs[ob]->n_rows)
	{
		k = -1;
		while (++k < bs[ob]->n_col)
		{
			x = bs[cb]->pos[i][k].x;
			z = bs[cb]->pos[i][k].z;
			bs[cb]->pos[i][k].x = (x * cos(rad)) + (z * sin(rad));
			bs[cb]->pos[i][k].z = -(x * sin(rad)) + (z * cos(rad));
		}
	}
}

static void	rot_x(t_board **bs)
{
	int	i;
	int	k;
	double	z;
	double	y;
	double	rad;

	i = -1;
	rad = bs[cb]->x_angle * (3.14159 / 180);
	while (++i < bs[ob]->n_rows)
	{
		k = -1;
		while (++k < bs[ob]->n_col)
		{
			y = bs[cb]->pos[i][k].y;
			z = bs[cb]->pos[i][k].z;
			bs[cb]->pos[i][k].y = (y * cos(rad)) - (z * sin(rad));
			bs[cb]->pos[i][k].z = (y * sin(rad)) + (z * sin(rad));
		}
	}
}

static void	set_origin(t_board **bs)
{
	int i;
	int k;

	i = 0;
	k = 0;
	while (i < bs[ob]->n_rows)
	{
		k = 0;
		while (k < bs[ob]->n_col)
		{
			bs[cb]->pos[i][k].x = bs[cb]->pos[i][k].x + bs[cb]->origin.x;
			bs[cb]->pos[i][k].y = bs[cb]->pos[i][k].y + bs[cb]->origin.y;
			k++;
		}
		i++;
	}
}

void		do_calculations(t_board **boards)
{
	set_separation(boards);
	rot_z(boards);
	rot_x(boards);
	rot_y(boards);
	set_origin(boards);
}
