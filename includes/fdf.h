/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 14:34:04 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/25 20:40:37 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include "libft.h"
# include "mlx.h"
# include <math.h>

typedef struct	s_pos
{
	int	x;
	int	y;
	int	z;
}				t_pos;

typedef struct	s_board
{
	t_pos		**pos;
	int			separator;
	t_pos		origin;
	double		elev_angle;
	double		rot_angle;
	int			n_rows;
	int			n_col;
}				t_board;

enum			e_boards_names
{
	ob,
	cb
};

void			put_error(int err);
t_board			**create_boards(t_board **boards, int fd);
void			print_boardsinfo(t_board **boards);

#endif
