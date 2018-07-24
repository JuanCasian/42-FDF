/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 12:58:37 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/23 21:39:15 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_strs(char *str, char c)
{
	int		n_strs;

	n_strs = 0;
	while (*str)
	{
		while (*str == c && *str)
			str++;
		if (*str != c && *str)
			n_strs++;
		while (*str != c && *str)
			str++;
	}
	return (n_strs);
}

char		**ft_strsplit(char const *s, char c)
{
	size_t	n_strs;
	char	**res;
	size_t	i;
	size_t	k;

	k = 0;
	n_strs = count_strs((char*)s, c);
	res = (char**)malloc(sizeof(char*) * n_strs + 1);
	while (k < n_strs)
	{
		i = 0;
		while (*s == c && *s)
			s++;
		while (s[i] != c && s[i])
			i++;
		res[k] = ft_strndup((char*)s, i);
		k++;
		while (*s != c && *s)
			s++;
	}
	res[k] = NULL;
	return (res);
}
