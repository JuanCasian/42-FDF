/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 13:40:26 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/11 13:58:44 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*tmpdst;
	unsigned char	*tmpsrc;
	unsigned char	tmpc;
	size_t			i;

	i = 0;
	tmpdst = (unsigned char*)dst;
	tmpsrc = (unsigned char*)src;
	tmpc = (unsigned char)c;
	while (n > 0)
	{
		tmpdst[i] = tmpsrc[i];
		if (tmpsrc[i] == tmpc)
		{
			i++;
			return ((void*)&tmpdst[i]);
		}
		i++;
		n--;
	}
	return (NULL);
}
