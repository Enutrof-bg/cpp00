# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kevwang <kevwang@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/10 12:27:10 by kevwang           #+#    #+#              #
#    Updated: 2025/10/10 12:27:11 by kevwang          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

FILE = main.cpp Zombie.cpp ZombieHorde.cpp

NAME = zombie

all:${NAME}

${NAME}: ${FILE}
	${CC} ${CFLAGS} $^ -o ${NAME}

clean: 
	rm -f main.o Zombie.o ZombieHorde.o

fclean:clean
	rm -f zombie

re:fclean
	make
