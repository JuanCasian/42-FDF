# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcasian <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/10 12:41:53 by jcasian           #+#    #+#              #
#    Updated: 2018/07/10 18:44:06 by jcasian          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = *.c

BINARIES = *.o

all: $(NAME)

$(NAME):
	@gcc -Wall -Werror -Wextra -c $(SRC)
	@ar rc $(NAME) $(BINARIES)
	@ranlib $(NAME)

clean:
	@rm -f $(BINARIES)

fclean: clean
	@rm -f $(NAME)

re: fclean all
