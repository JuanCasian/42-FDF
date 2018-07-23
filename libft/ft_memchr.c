/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 15:22:47 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/11 15:27:49 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*tmps;
	unsigned char	tmpc;
	size_t			i;

	tmps = (unsigned char*)s;
	tmpc = (unsigned char)c;
	i = 0;
	while (n > 0)
	{
		if (tmps[i] == tmpc)
			return ((void*)&tmps[i]);
		i++;
		n--;
	}
	return (NULL);
}
