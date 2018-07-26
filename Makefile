# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcasian <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/23 14:03:41 by jcasian           #+#    #+#              #
#    Updated: 2018/07/24 14:11:35 by jcasian          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fdf

SRCSDIR = srcs
LIBSDIR = libs
SRCS = $(addprefix $(SRCSDIR)/,\
	  main.c read_input.c fdf.c) 
INCLUDES = includes
OBJECTS = $(patsubst %.c, %.o, $(SRCS))
MINILIBX = -L$(LIBSDIR) -lmlx -framework OpenGL -framework AppKit

all: $(NAME)

%.o: %.c
	gcc -c -Wall -Werror -Wextra -I$(INCLUDES) -c $< -o $@

$(NAME): $(OBJECTS)
	gcc -o $(NAME) $(OBJECTS) -L$(LIBSDIR) -lft $(MINILIBX) 

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

debug:
	gcc -g -Wall -Wextra -Werror -I$(INCLUDES) srcs/*.c libft/*.c -o debug

debugclean:
	rm -rf debug*

redebug: debugclean debug
