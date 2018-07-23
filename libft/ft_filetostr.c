/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_filetostr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 12:20:31 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/15 12:20:33 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** This function recieves a file descriptor and returns a string containing
** the information of the file. If the file was blank it returns NULL;
** In case of error exits the program and prints error reading file.
*/

#include "libft.h"

char	*ft_filetostr(int fd)
{
	char	buf[BUFF_SIZE];
	char	*str;
	char	*nstr;
	int		n;
	size_t	len;

	str = NULL;
	len = 0;
	while ((n = read(fd, buf, BUFF_SIZE)))
	{
		if (n < 0)
			return (NULL);
		if (!(nstr = ft_strnew(len + n)))
			return (NULL);
		nstr = ft_strncat(nstr, str, len);
		nstr = ft_strncat(nstr, (char*)buf, n);
		free((void*)str);
		str = nstr;
		len += n;
	}
	return (str);
}
