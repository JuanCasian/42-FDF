/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_remalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 12:18:53 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/15 12:18:55 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** This functions gets a pointer into a memory adress then creates a new
** pointer and allocates the memory of the size you give, after that
** it copies the info of the previous pointer and returns the new one.
*/

void	*ft_remalloc(void *ptr, size_t size, size_t curr)
{
	void	*newptr;

	if (!(newptr = (void*)malloc(size)))
		return (NULL);
	newptr = ft_memcpy(newptr, ptr, curr);
	free(ptr);
	return (newptr);
}
