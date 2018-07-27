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

static void	change_to_2d(t_board **bs)
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
			bs[cb]->pos[i][k].x = bs[cb]->pos[i][k].x + ((bs[cb]->pos[i][k].z *
						cos(bs[cb]->elev_angle)) / 2);
			bs[cb]->pos[i][k].y = bs[cb]->pos[i][k].y + ((bs[cb]->pos[i][k].z *
						sin(bs[cb]->elev_angle)) / 2);
			k++;
		}
		i++;
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
	change_to_2d(boards);
	set_origin(boards);
}
