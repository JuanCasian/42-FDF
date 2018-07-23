/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_samplelist.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 18:47:29 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/13 19:57:21 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_samplelist(size_t len)
{
	t_list	*my_list;
	size_t	i;
	char	*str;

	i = 1;
	str = ft_strinit("Example string");
	my_list = ft_lstnew((void*)str, sizeof(str));
	while (i < len)
	{
		ft_lstadd(&my_list, ft_lstnew((void*)str, sizeof(str)));
		i++;
	}
	return (my_list);
}
