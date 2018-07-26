/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 18:28:55 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/25 20:19:32 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int		main(int argc, char **argv)
{
	int		fd;
	t_board	**boards;

	if (argc == 2)
	{
		if ((fd = open(argv[1], O_RDONLY)) < 0)
			put_error(1);
		if (!(boards = (t_board**)malloc(sizeof(t_board) * 2)))
			put_error(2);
		if (!(boards[ob] = (t_board*)malloc(sizeof(t_board))))
			put_error(2);
		if (!(boards[cb] = (t_board*)malloc(sizeof(t_board))))
			put_error(2);
		boards = create_boards(boards, fd);
		print_boardsinfo(boards);
		free(boards);
	}
	else
		put_error(0);
	return (0);
}
