# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kevwang <kevwang@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/11 13:21:53 by kevwang           #+#    #+#              #
#    Updated: 2025/10/11 13:21:55 by kevwang          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

FILE = main.cpp Harl.cpp

NAME = zombie

all:${NAME}

${NAME}: ${FILE}
	${CC} ${CFLAGS} $^ -o ${NAME}

clean: 
	rm -f main.o

fclean:clean
	rm -f zombie

re:fclean
	make

