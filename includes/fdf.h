/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcasian <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/23 14:34:04 by jcasian           #+#    #+#             */
/*   Updated: 2018/07/26 21:39:09 by jcasian          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include "libft.h"
# include "mlx.h"
# include <math.h>

typedef struct	s_pos
{
	double	x;
	double	y;
	double	z;
}				t_pos;

typedef struct	s_board
{
	t_pos		**pos;
	double		separator;
	double		z_sep;
	t_pos		origin;
	double		y_angle;
	double		x_angle;
	double		z_angle;
	int			n_rows;
	int			n_col;
	void		*mlx;
	void		*win;
}				t_board;

enum			e_boards_names
{
	ob,
	cb
};

void			put_error(int err);
t_board			**create_boards(t_board **boards, int fd);
void			fdf(t_board **boards);
void			do_calculations(t_board **boards);
void			draw_map(t_board **bs);
void			rot_z(t_board **bs);
void			rot_y(t_board **bs);
void			rot_x(t_board **bs);

#endif
