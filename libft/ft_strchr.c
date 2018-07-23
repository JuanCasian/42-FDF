/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 15:58:38 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/11 16:08:53 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	tmpc;
	int		i;
	int		len;

	tmpc = (char)c;
	i = 0;
	len = ft_strlen((char*)s);
	while (i <= len)
	{
		if (s[i] == tmpc)
			return ((char*)&s[i]);
		i++;
	}
	return (NULL);
}
