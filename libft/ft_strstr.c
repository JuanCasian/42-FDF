/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 20:50:50 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/10 21:14:12 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	charcmp(char a, char b)
{
	if (a == b)
		return (0);
	else
		return (a - b);
}

static int	found_ned(char *hs, char *ned)
{
	int i;

	i = 0;
	while (ned[i])
	{
		if (charcmp(ned[i], hs[i]) != 0)
			return (0);
		i++;
	}
	return (1);
}

char		*ft_strstr(const char *hs, const char *ned)
{
	int i;

	i = 0;
	if (ned[0] == '\0')
		return ((char*)hs);
	while (hs[i])
	{
		if (charcmp(hs[i], ned[0]) == 0)
		{
			if (found_ned((char*)&hs[i], (char*)ned))
				return ((char*)&hs[i]);
		}
		i++;
	}
	return (NULL);
}
