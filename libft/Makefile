# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcasian <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/10 12:41:53 by jcasian           #+#    #+#              #
#    Updated: 2018/07/24 13:32:43 by jcasian          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ../libs/libft.a

SRC = *.c

BINARIES = *.o

INCLUDES = ../includes

all: $(NAME)

$(NAME):
	@gcc -Wall -Werror -Wextra -c $(SRC) -I$(INCLUDES)
	@ar rc $(NAME) $(BINARIES)
	@ranlib $(NAME)

clean:
	@rm -f $(BINARIES)

fclean: clean
	@rm -f $(NAME)

re: fclean all
