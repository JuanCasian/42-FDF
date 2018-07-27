/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_boards.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 18:47:02 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/26 16:40:40 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static void	init_boards_data(t_board **bs)
{
	int	i;

	i = 0;
	while (i < 2)
	{
		bs[i]->separator = 30;
		bs[i]->z_sep = 10;
		bs[i]->origin.x = 100;
		bs[i]->origin.y = 100;
		bs[i]->origin.z = 0;
		bs[i]->x_angle = 15;
		bs[i]->y_angle = 15;
		bs[i]->z_angle = 15;
		i++;
	}
}

static void	get_single_board(t_board **b, char ***zstrs)
{
	int	i;
	int k;

	i = 0;
	b[0]->n_col = 0;
	while (zstrs[0][b[0]->n_col])
		(b[0]->n_col)++;
	if (!((*b)->pos = (t_pos**)malloc(sizeof(t_pos*) * (*b)->n_rows)))
		put_error(2);
	while (i < (*b)->n_rows)
	{
		if (!((*b)->pos[i] = (t_pos*)malloc(sizeof(t_pos) * (*b)->n_col)))
			put_error(2);
		k = 0;
		while (k < (*b)->n_col)
		{
			(*b)->pos[i][k].z = ft_atoi(zstrs[i][k]);
			(*b)->pos[i][k].y = i;
			(*b)->pos[i][k].x = k;
			k++;
		}
		i++;
	}
}

t_board		**create_boards(t_board **boards, int fd)
{
	char	*filestr;
	char	**lines;
	char	***zstrs;
	int		i;

	boards[ob]->n_rows = 0;
	filestr = ft_filetostr(fd);
	lines = ft_strsplit(filestr, '\n');
	free(filestr);
	while (lines[boards[ob]->n_rows])
		(boards[ob]->n_rows)++;
	if (!(zstrs = (char***)malloc(sizeof(char**) * boards[ob]->n_rows + 1)))
		put_error(2);
	i = boards[ob]->n_rows;
	zstrs[i] = NULL;
	while (--i >= 0)
		zstrs[i] = ft_strsplit(lines[i], ' ');
	free(lines);
	boards[cb]->n_rows = boards[ob]->n_rows;
	get_single_board(&boards[ob], zstrs);
	get_single_board(&boards[cb], zstrs);
	init_boards_data(boards);
	free(zstrs);
	return (boards);
}
