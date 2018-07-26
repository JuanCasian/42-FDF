/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 14:34:04 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/25 18:18:26 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include "libft.h"
# include "mlx.h"
# include <math.h>

typedef struct	s_position
{
	int	x;
	int	y;
	int	z;
}				t_position;

typedef struct	s_board
{
	t_pos	**pos;
	int		separator;
	t_pos	origin;
	float	elev_angle;
	float	rot_angle;
	int		n_rows;
	int		n_columns;
}				t_board;

t_board			*read_input(int fd);
void			fdf(t_board *fb);

#endif
