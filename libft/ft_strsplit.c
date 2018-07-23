/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 12:58:37 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/13 14:50:10 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_n_strs(char *str, char c)
{
	int	n_strs;
	int	i;
	int	flag;

	i = 0;
	n_strs = 0;
	flag = 1;
	while (str[i] == c)
		i++;
	while (str[i])
		if (str[i] == c)
		{
			n_strs++;
			i++;
			flag = 0;
			while (str[i] == c && str[i])
				i++;
		}
		else
		{
			flag = 1;
			i++;
		}
	return (n_strs + flag);
}

static int	count_n_chars(char const *str, int i, char c)
{
	int	n_chars;

	n_chars = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (n_chars);
		n_chars++;
		i++;
	}
	return (n_chars);
}

static int	set_mem(char ***res, int mem_size)
{
	*res = (char**)malloc(sizeof(char*) * mem_size);
	if (!(*res))
		return (0);
	return (1);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**res;
	int		k;
	int		i;
	int		n_chars;

	if (!s)
		return (NULL);
	if (set_mem(&res, count_n_strs((char*)s, c) + 1) == 0)
		return (NULL);
	k = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			n_chars = count_n_chars(s, i, c);
			res[k] = ft_strsub(s, i, n_chars);
			i = i + n_chars;
			k++;
		}
	}
	res[k] = NULL;
	return (res);
}
