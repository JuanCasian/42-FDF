/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 13:46:38 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/27 13:40:22 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	deal_keys_pt4(int key, t_board **bs)
{
	if (key == 125)
		bs[cb]->origin.y += 10;
}

void	deal_keys_pt3(int key, t_board **boards)
{
	if (key == 1)
	{
		if (boards[cb]->x_angle > -88)
			boards[cb]->x_angle -= 2;
	}
	else if (key == 7)
	{
		if (boards[cb]->z_angle > -43)
			boards[cb]->z_angle -= 2;
	}
	else if (key == 6)
	{
		if (boards[cb]->z_angle < 43)
			boards[cb]->z_angle += 2;
	}
	else if (key == 123)
	{
		if (boards[cb]->origin.x > 550)
			boards[cb]->origin.x -= 10;
	}
	else if (key == 124)
		boards[cb]->origin.x += 10;
	else
		deal_keys_pt4(key, boards);
}

void	deal_keys_pt2(int key, t_board **boards)
{
	if (key == 69)
		boards[cb]->z_sep += 1;
	else if (key == 78)
		boards[cb]->z_sep -= 1;
	else if (key == 2)
	{
		if (boards[cb]->y_angle < 88)
			boards[cb]->y_angle += 2;
	}
	else if (key == 0)
	{
		if (boards[cb]->y_angle > -88)
			boards[cb]->y_angle -= 2;
	}
	else if (key == 13)
	{
		if (boards[cb]->x_angle < 88)
			boards[cb]->x_angle += 2;
	}
	else
		deal_keys_pt3(key, boards);
}

int		deal_keys(int key, void *param)
{
	t_board **boards;

	boards = (t_board**)param;
	if (key == 53)
		exit(0);
	else if (key == 126)
	{
		if (boards[cb]->origin.y > 61)
			boards[cb]->origin.y -= 10;
	}
	else if (key == 34)
		boards[cb]->separator += 1;
	else if (key == 31)
	{
		if (boards[cb]->separator > 1)
			boards[cb]->separator -= 1;
	}
	else
		deal_keys_pt2(key, boards);
	do_calculations(boards);
	draw_map(boards);
	return (0);
}

void	fdf(t_board **boards)
{
	void	*mlx_ptr;
	void	*win_ptr;

	do_calculations(boards);
	mlx_ptr = mlx_init();
	win_ptr = mlx_new_window(mlx_ptr, SWIDTH, SHEIGHT, "MLX WINDOW");
	boards[ob]->mlx = mlx_ptr;
	boards[ob]->win = win_ptr;
	boards[cb]->mlx = mlx_ptr;
	boards[cb]->win = win_ptr;
	mlx_key_hook(boards[cb]->win, deal_keys, (void*)boards);
	draw_map(boards);
	mlx_loop(mlx_ptr);
}
