# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kevwang <kevwang@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/19 13:29:04 by kevwang           #+#    #+#              #
#    Updated: 2025/08/19 13:29:04 by kevwang          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

FILE = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
# newZombie.cpp randomChump.cpp
NAME = zombie

SRC = ${FILE:.cpp=.o}

all:${NAME}

${NAME}: ${SRC}
	${CC} ${CFLAGS} $^ -o ${NAME}

%.o:%.cpp
	${CC} ${CFLAGS} -c $^

clean: 
	rm -f main.o newZombie.o Zombie.o randomChump.o

fclean:clean
	rm -f zombie

re:fclean
	make