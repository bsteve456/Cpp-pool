# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/30 20:16:11 by stbaleba          #+#    #+#              #
#    Updated: 2020/12/03 13:18:13 by stbaleba         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=clang++
CFLAGS=-Wall -Werror -Wextra

NAME=freplace
INC=-I.
FILES=freplace.cpp
OBJ=$(FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) freplace.hpp
	$(CC) $(CFLAGS) $(INC) $(OBJ) -o $(NAME)
fclean:
	rm -rf $(NAME)
re: clean all
