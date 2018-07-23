/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 21:19:18 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/10 21:47:11 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	found_ned(char *hs, char *ned)
{
	int i;

	i = 0;
	while (ned[i])
	{
		if (ned[i] != hs[i])
			return (0);
		i++;
	}
	return (1);
}

char		*ft_strnstr(const char *hs, const char *ned, size_t len)
{
	size_t i;

	i = 0;
	if (ned[0] == '\0')
		return ((char*)hs);
	while (hs[i] && i < len)
	{
		if (hs[i] == ned[0])
		{
			if ((i + (size_t)ft_strlen((char*)ned)) > len)
				return (NULL);
			if (found_ned((char*)&hs[i], (char*)ned))
				return ((char*)&hs[i]);
		}
		i++;
	}
	return (NULL);
}
