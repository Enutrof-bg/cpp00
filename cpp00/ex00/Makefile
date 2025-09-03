# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kevwang <kevwang@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/03 11:59:11 by kevwang           #+#    #+#              #
#    Updated: 2025/07/03 11:59:12 by kevwang          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

FILE = megaphone.cpp

NAME = megaphone

SRC = ${FILE:.cpp=.o}

all:${NAME}

${NAME}: ${SRC}
	${CC} ${CFLAGS} $^ -o ${NAME}

%.o:%.cpp
	${CC} ${CFLAGS} -c $^

clean:
	rm -f megaphone.o

fclean:clean
	rm -f megaphone

re: fclean
	make