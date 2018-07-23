/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_words.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 21:34:01 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/12 21:35:29 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_words(char *str)
{
	int	n_words;
	int	i;
	int	flag;

	i = 0;
	n_words = 0;
	flag = 0;
	while (ft_is_space(str[i]))
		i++;
	while (str[i])
		if (ft_is_space(str[i]))
		{
			n_words++;
			i++;
			flag = 0;
			while (ft_is_space(str[i]) && str[i])
				i++;
		}
		else
		{
			flag = 1;
			i++;
		}
	return (n_words + flag);
}
