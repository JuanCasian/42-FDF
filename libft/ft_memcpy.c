/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 12:54:40 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/17 15:58:51 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*tmpdst;
	char	*tmpsrc;

	tmpdst = (char*)dst;
	tmpsrc = (char*)src;
	i = 0;
	while (n > 0)
	{
		tmpdst[i] = tmpsrc[i];
		i++;
		n--;
	}
	return (dst);
}
