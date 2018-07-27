/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotations.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 21:39:49 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/26 21:43:24 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	rot_z(t_board **bs)
{
	int		i;
	int		k;
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

void	rot_y(t_board **bs)
{
	int		i;
	int		k;
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

void	rot_x(t_board **bs)
{
	int		i;
	int		k;
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
