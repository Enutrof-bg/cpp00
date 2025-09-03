# **************************************************************************** #
#                                                                              #
#                         :::      ::::::::                                   #
#    Makefile                      :+:      :+:    :+:                        #
#                                 +:+ +:+         +:+                         #
#    By: kevwang <kevwang@student.42.fr>        +#+  +:+       +#+            #
#                                             +#+#+#+#+#+   +#+               #
#    Created: 2025/09/01 08:30:00 by kevwang          #+#    #+#               #
#    Updated: 2025/09/01 08:30:00 by kevwang         ###   ########.fr         #
#                                                                              #
# **************************************************************************** #

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

FILE = Account.cpp tests.cpp

NAME = account

SRC = ${FILE:.cpp=.o}

all:${NAME}

${NAME}: ${SRC}
	${CC} ${CFLAGS} $^ -o ${NAME}

%.o:%.cpp
	${CC} ${CFLAGS} -c $^
	
clean: 
	rm -f Account.o tests.o

fclean:clean
	rm -f account

re:fclean
	make