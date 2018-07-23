/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 14:04:09 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/11 15:04:47 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*tmpdst;
	char	*tmpsrc;
	size_t	i;

	i = 0;
	tmpdst = (char*)dst;
	tmpsrc = (char*)src;
	if (tmpsrc < tmpdst)
	{
		while (len > 0)
		{
			tmpdst[len - 1] = tmpsrc[len - 1];
			len--;
		}
	}
	else
	{
		while (i < len)
		{
			tmpdst[i] = tmpsrc[i];
			i++;
		}
	}
	return (dst);
}
