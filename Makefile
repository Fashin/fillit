# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cbeauvoi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/12/13 12:01:18 by cbeauvoi          #+#    #+#              #
#    Updated: 2016/12/13 12:10:46 by cbeauvoi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_NAME = main.c ft_check_char.c ft_read_file.c ft_check_pieces.c

NAME = a.out

CFLAGS = -Wall -Werror -Wextra

OBJ_NAME = $(SRC_NAME:.c=.o)

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) $(SRC_NAME)

clean:
	rm -rf $(OBJ_NAME)

fclean: clean
	rm -rf $(NAME)

re: fclean all
