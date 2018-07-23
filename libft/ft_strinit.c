/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strinit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 17:53:09 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/12 18:18:33 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strinit(char *str)
{
	char *res;

	res = ft_strnew(ft_strlen(str));
	if (!res)
		return (NULL);
	res = ft_strcpy(res, str);
	return (res);
}
