/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_coor.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 20:07:06 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/25 20:23:45 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"
#include <stdio.h>

void	print_boardsinfo(t_board **board)
{
	int i;
	int k;
	int z;

	z = 0;
	while (z < 2)
	{
		if (z == 0)
			printf("Original board");
		else
			printf("Changeable boards");
		printf("Board info: \nSeparator: %i\nOrigin: (%i, %i, %i)\nElevation Angle: %f\nRotation Angle: %f\nNumber of rows: %i\nNumber of columns: %i\n", board[z]->separator, board[z]->origin.x, board[z]->origin.y, board[z]->origin.z, board[z]->elev_angle, board[z]->rot_angle, board[z]->n_rows, board[z]->n_col);
		i = 0;
		while (i < board[z]->n_rows)
		{
			k = 0;
			while (k < board[z]->n_col)
			{
				printf("(%i, %i, %i) ", board[z]->pos[i][k].x, board[z]->pos[i][k].y, board[z]->pos[i][k].z);
				k++;
			}
			printf("\n");
			i++;
		}
		z++;
	}
}
