/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 18:20:18 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/12 18:29:42 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int		i;
	char				*res;

	if (!s || !f)
		return (NULL);
	i = 0;
	res = ft_strinit((char*)s);
	if (!res)
		return (NULL);
	while (s[i])
	{
		res[i] = f(i, (char)s[i]);
		i++;
	}
	return (res);
}
