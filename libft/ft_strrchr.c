/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 16:13:32 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/11 16:16:39 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	tmpc;
	int		len;

	tmpc = (char)c;
	len = ft_strlen((char*)s);
	while (len >= 0)
	{
		if (s[len] == tmpc)
			return ((char*)&s[len]);
		len--;
	}
	return (NULL);
}
