/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 18:43:50 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/11 19:31:21 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*res;
	char	*reschar;
	size_t	i;

	i = 0;
	res = malloc(size);
	if (res == NULL)
		return (NULL);
	reschar = (char*)res;
	while (i < size)
	{
		reschar[i] = '\0';
		i++;
	}
	return (res);
}
