/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 12:32:27 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/11 12:48:46 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	char			*tmp;
	unsigned char	tmpc;

	i = 0;
	tmp = (char*)b;
	tmpc = (unsigned char)c;
	while (len > 0)
	{
		tmp[i] = tmpc;
		i++;
		len--;
	}
	return (b);
}
