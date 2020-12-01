# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: stbaleba <stbaleba@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/30 20:16:11 by stbaleba          #+#    #+#              #
#    Updated: 2020/12/01 18:43:11 by stbaleba         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=clang++
CFLAGS=-Wall -Werror -Wextra

NAME=phonebook
INC=-I
FILES=phonebook.cpp add_functs.cpp  \
	 search_phone.cpp \
	add_phone.cpp
OBJ=$(FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJ) phonebook.hpp
	$(CC) $(CFLAGS) $(INC) $(OBJ) -o $(NAME)
fclean:
	rm -rf $(NAME)
re: clean all
