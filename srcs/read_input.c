/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_input.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 14:49:03 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/25 18:20:33 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

static t_board	*get_final_board(char ***num_strs)
{
	t_board *fb;
	int		i;
	int		k;

	i = 0;
	fb = (t_board*)malloc(sizeof(t_board));
	fb->n_rows = 0;
	fb->n_columns = 0;
	while (num_strs[fb->n_rows])
		fb->n_rows++;
	while (num_strs[0][fb->n_columns])
		fb->n_columns++;
	fb->board = (int**)malloc(sizeof(int*) * fb->n_rows);
	while (i < fb->n_rows)
	{
		fb->board[i] = (int*)malloc(sizeof(int) * fb->n_columns);
		k = 0;
		while (k < fb->n_columns)
		{
			fb->board[i][k] = ft_atoi(num_strs[i][k]);
			k++;
		}
		i++;
	}
	return (fb);
}

t_board			*read_input(int fd)
{
	char	*filestr;
	char	**two_dstr;
	char	***num_strs;
	int		n_rows;
	t_board	*ob;

	n_rows = 0;
	filestr = ft_filetostr(fd);
	two_dstr = ft_strsplit(filestr, '\n');
	free(filestr);
	while (two_dstr[n_rows])
		n_rows++;
	num_strs = (char***)malloc(sizeof(char**) * n_rows + 1);
	num_strs[n_rows] = NULL;
	while (--n_rows >= 0)
		num_strs[n_rows] = ft_strsplit(two_dstr[n_rows], ' ');
	free(two_dstr);
	ob = get_final_board(num_strs);
	return (fb);
}
