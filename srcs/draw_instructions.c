/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw_instructions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/27 13:22:16 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/27 13:57:50 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	draw_instructions(void *mlx, void *win)
{
	mlx_string_put(mlx, win, 1, 51, 16777215,
			"Zoom in / Zoom out = \"i / o\"");
	mlx_string_put(mlx, win, 1, 70, 16777215,
			"Move up / Move down = \"up / down\"");
	mlx_string_put(mlx, win, 1, 90, 16777215,
			"Move left / Move right = \"left / right\"");
	mlx_string_put(mlx, win, 1, 110, 16777215,
			"Rotate in z axis = \"z / x\"");
	mlx_string_put(mlx, win, 1, 130, 16777215,
			"Rotate in y axis = \"a / d\"");
	mlx_string_put(mlx, win, 1, 150, 16777215,
			"Rotate in x axis = \"w / s\"");
	mlx_string_put(mlx, win, 1, 170, 16777215,
			"Increase / Decrease height = \"+ / -\"");
}
