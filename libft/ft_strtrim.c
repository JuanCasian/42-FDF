/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 19:44:20 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/13 12:52:22 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

char		*ft_strtrim(char const *s)
{
	unsigned int	start;
	unsigned int	end;
	char			*res;
	size_t			len;

	if (!s)
		return (NULL);
	start = 0;
	end = ft_strlen((char*)s) - 1;
	while (ft_is_space(s[start]) && s[start])
	{
		start++;
	}
	if (s[start] == '\0')
		return (ft_strinit(""));
	while (ft_is_space(s[end]) && s[end])
		end--;
	len = (size_t)(end - start + 1);
	res = ft_strsub(s, start, len);
	return (res);
}
