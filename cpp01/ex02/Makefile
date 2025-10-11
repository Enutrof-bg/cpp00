# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kevwang <kevwang@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/10 13:05:42 by kevwang           #+#    #+#              #
#    Updated: 2025/10/10 13:05:45 by kevwang          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

FILE = main.cpp

NAME = main

all:${NAME}

${NAME}: ${FILE}
	${CC} ${CFLAGS} $^ -o ${NAME}

clean: 
	rm -f main.o

fclean:clean
	rm -f main

re:fclean
	make

