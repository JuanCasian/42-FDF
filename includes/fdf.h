/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 14:34:04 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/24 13:41:44 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include "libft.h"
# include "mlx.h"


typedef struct	s_board
{
	int		**board;
	int		n_rows;
	int		n_columns;
}				t_board;

t_board			*read_input(int fd);

#endif
