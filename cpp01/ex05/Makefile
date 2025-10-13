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

NAME = Harl

SRC = ${FILE:.cpp=.o}

all:${NAME}

${NAME}: ${SRC}
	${CC} ${CFLAGS} $^ -o ${NAME}

%.o:%.cpp
	${CC} ${CFLAGS} -c $^
	
clean: 
	rm -f main.o Harl.o

fclean:clean
	rm -f Harl

re:fclean
	make

