/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 14:45:45 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/27 13:22:06 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	draw_line_y(t_pos pos1, t_pos pos2, t_board **bs)
{
	int x;
	int y;

	y = pos1.y;
	while (y <= pos2.y)
	{
		x = (((pos2.x - pos1.x) / (pos2.y - pos1.y)) * (y - pos1.y)) +
			pos1.x;
		mlx_pixel_put(bs[cb]->mlx, bs[cb]->win, x, y, 65280);
		y++;
	}
}

void	draw_line_x(t_pos pos1, t_pos pos2, t_board **bs)
{
	int x;
	int y;

	x = pos1.x;
	while (x <= pos2.x)
	{
		y = (((pos2.y - pos1.y) / (pos2.x - pos1.x)) * (x - pos1.x)) +
			pos1.y;
		mlx_pixel_put(bs[cb]->mlx, bs[cb]->win, x, y, 65280);
		x++;
	}
}

void	draw_topborder(void *mlx, void *win)
{
	int y;
	int	x;
	int ylim;

	y = 0;
	ylim = 50;
	while (y <= ylim)
	{
		x = 0;
		while (x <= SWIDTH)
		{
			mlx_pixel_put(mlx, win, x, y, 16711680);
			x++;
		}
		y++;
	}
}

void	draw_bottomborder(void *mlx, void *win)
{
	int y;
	int	x;

	y = SHEIGHT - 50;
	while (y <= SHEIGHT)
	{
		x = 0;
		while (x <= SWIDTH)
		{
			mlx_pixel_put(mlx, win, x, y, 16711680);
			x++;
		}
		y++;
	}
}

void	draw_map(t_board **bs)
{
	int i;
	int k;

	i = 0;
	mlx_clear_window(bs[cb]->mlx, bs[cb]->win);
	while (i < bs[ob]->n_rows)
	{
		k = 0;
		while (k < bs[ob]->n_col)
		{
			mlx_pixel_put(bs[cb]->mlx, bs[cb]->win, bs[cb]->pos[i][k].x,
					bs[cb]->pos[i][k].y, 255);
			if ((k + 1) < bs[ob]->n_col)
				draw_line_x(bs[cb]->pos[i][k], bs[cb]->pos[i][k + 1], bs);
			if ((i + 1) < bs[ob]->n_rows)
				draw_line_y(bs[cb]->pos[i][k], bs[cb]->pos[i + 1][k], bs);
			k++;
		}
		i++;
	}
	draw_topborder(bs[cb]->mlx, bs[cb]->win);
	draw_bottomborder(bs[cb]->mlx, bs[cb]->win);
	draw_instructions(bs[cb]->mlx, bs[cb]->win);
}
