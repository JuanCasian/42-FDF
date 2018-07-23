/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_input.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 14:49:03 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/23 15:36:55 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	read_input(int fd)
{
	char	*filestr;

	filestr = ft_filetostr(fd);	
	ft_putstr(filestr);
}
