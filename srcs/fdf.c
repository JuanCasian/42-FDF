/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 13:46:38 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/26 15:25:39 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	fdf(t_board **boards)
{
	void	*mlx_ptr;
	void	*win_ptr;

	do_calculations(boards);
	mlx_ptr = mlx_init();
	win_ptr = mlx_new_window(mlx_ptr, 1000, 1000, "MLX WINDOW");
	boards[ob]->mlx = mlx_ptr;
	boards[ob]->win = win_ptr;
	boards[cb]->mlx = mlx_ptr;
	boards[cb]->win = win_ptr;
	draw_map(boards);
	mlx_loop(mlx_ptr);
}
