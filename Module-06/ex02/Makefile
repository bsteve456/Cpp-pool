# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/30 20:16:11 by stbaleba          #+#    #+#              #
#    Updated: 2021/01/10 11:38:54 by stbaleba         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=clang++
CFLAGS=-Wall -Werror -Wextra -std=c++98

NAME=identify
INC=
FILES=identify.cpp
OBJ=$(FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -I. -o $(NAME)
fclean:
	rm -rf $(NAME)
re: fclean all
