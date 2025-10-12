# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kevwang <kevwang@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/12 14:00:57 by kevwang           #+#    #+#              #
#    Updated: 2025/10/12 14:01:00 by kevwang          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

FILE = main.cpp Fixed.cpp

NAME = Fixed

SRC = ${FILE:.cpp=.o}

all:${NAME}

${NAME}: ${SRC}
	${CC} ${CFLAGS} $^ -o ${NAME}

clean: 
	rm -f main.o Fixed.o

fclean:clean
	rm -f Fixed

re:fclean
	make


