/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_error.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/25 18:34:41 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/25 18:42:50 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	put_error(int err)
{
	char *errormsg[3];

	errormsg[0] = "Usage: ./fdf path/to/file";
	errormsg[1] = "ERROR: Could not open specified file";
	errormsg[2] = "ERROR: Could not malloc memory";
	ft_putendl(errormsg[err]);
	exit(-1);
}
