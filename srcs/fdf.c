/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/24 14:02:00 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/24 14:52:48 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	fdf(t_board *fb)
{
	void	*mlx_ptr;
	void	*win_ptr;
	int		x;

	x = 500;
	mlx_ptr = mlx_init();
	win_ptr = mlx_new_window(mlx_ptr, 500, 500, "Hello Window");
	while (x > 0)
	{
		mlx_pixel_put(mlx_ptr, win_ptr, x, x * 2 + 1, 0xFFFFFF);
		x--;
	}
	mlx_loop(mlx_ptr);
	fb = NULL;
	
}
