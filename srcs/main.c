/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 14:20:39 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/24 13:20:34 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

int	main(int argc, char **argv)
{
	int		fd;
	t_board	*fb;

	if (argc == 2)
	{
		if ((fd = open(argv[1], O_RDONLY)) < 0)
		{
			ft_putstr(argv[1]);
			ft_putendl(" could not be opened");
		}
		else
		{
			fb = read_input(fd);
		}
	}
	else
		ft_putendl("usage: ./fdf PathToMap");
	return (0);
}
