/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printlist.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 18:29:46 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/13 18:35:33 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_printlist(t_list *my_list)
{
	int i;

	i = 0;
	while (my_list)
	{
		ft_putstr("Element #");
		ft_putnbr(i);
		ft_putendl(" values are:");
		ft_putstr("Content: ");
		ft_putendl((char*)my_list->content);
		ft_putstr("Content size: ");
		ft_putnbr((int)my_list->content_size);
		ft_putchar('\n');
		my_list = my_list->next;
		i++;
	}
}
