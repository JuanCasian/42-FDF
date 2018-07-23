/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 15:39:57 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/11 15:51:57 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*tmps1;
	unsigned char	*tmps2;
	size_t			i;

	tmps1 = (unsigned char*)s1;
	tmps2 = (unsigned char*)s2;
	i = 0;
	while (n > 0)
	{
		if (tmps1[i] != tmps2[i])
			return ((int)(tmps1[i] - tmps2[i]));
		i++;
		n--;
	}
	return (0);
}
