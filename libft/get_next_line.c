/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/17 19:30:24 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/19 21:54:04 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static	int	get_new_line(int fd, char **filestrs, char **line)
{
	char		*new_line_address;
	char		*tmp;

	if ((new_line_address = ft_strchr(filestrs[fd], '\n')))
	{
		tmp = filestrs[fd];
		*new_line_address = '\0';
		*line = ft_strsub(filestrs[fd], 0, new_line_address - filestrs[fd]);
		filestrs[fd] = ft_strdup(new_line_address + 1);
		free(tmp);
		return (1);
	}
	if (*filestrs[fd])
	{
		*line = ft_strnew(ft_strlen(filestrs[fd]));
		ft_strcpy(*line, filestrs[fd]);
		filestrs[fd] = ft_memalloc(BUFF_SIZE + 1);
		return (1);
	}
	return (0);
}

static	int	ft_readfile(int fd, char **filestrs)
{
	char		*buf;
	char		*tmp;
	int			i;

	buf = ft_strnew(BUFF_SIZE);
	while ((i = read(fd, buf, BUFF_SIZE)) > 0)
	{
		if (!filestrs[fd])
		{
			filestrs[fd] = ft_strnew(ft_strlen(buf));
			ft_strcpy(filestrs[fd], buf);
		}
		else
		{
			tmp = filestrs[fd];
			filestrs[fd] = ft_strjoin(filestrs[fd], buf);
			free(tmp);
		}
		ft_memset(buf, 0, BUFF_SIZE);
	}
	free(buf);
	return (i);
}

int			get_next_line(const int fd, char **line)
{
	static	char	*filestrs[FDS];

	if (!line || fd < 0 || BUFF_SIZE < 0 ||
			(ft_readfile(fd, &filestrs[fd]) < 0) || fd > FDS)
		return (-1);
	if (get_new_line(fd, &filestrs[fd], line) == 1)
		return (1);
	return (0);
}
