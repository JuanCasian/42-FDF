/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_input.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 14:49:03 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/23 21:26:41 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	read_input(int fd)
{
	char	*filestr;
	char	**two_dstr;

	two_dstr = NULL;
	filestr = ft_filetostr(fd);	
	two_dstr = ft_strsplit(filestr, '\n');
	while (*two_dstr)
	{
		ft_putendl(*two_dstr);
		two_dstr++;
	}
}
