/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_filetostr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/15 12:20:31 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/24 13:15:29 by jcasian          ###   ########.fr       */
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
	char	*buf;
	char	*tmp;
	int		i;
	char	*filestr;

	filestr = NULL;
	buf = ft_strnew(BUFF_SIZE);
	while ((i = read(fd, buf, BUFF_SIZE)) > 0)
	{
		if (!filestr)
		{
			filestr = ft_strnew(ft_strlen(buf));
			ft_strcpy(filestr, buf);
		}
		else
		{
			tmp = filestr;
			filestr = ft_strjoin(filestr, buf);
			free(tmp);
		}
		ft_memset(buf, 0, BUFF_SIZE);
	}
	free(buf);
	return (filestr);
}
