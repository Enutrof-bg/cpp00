# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kevwang <kevwang@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/10 13:31:57 by kevwang           #+#    #+#              #
#    Updated: 2025/10/10 13:31:58 by kevwang          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

FILE = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp
#HumanB.cpp
NAME = human

SRC = ${FILE:.cpp=.o}

all:${NAME}

${NAME}: ${SRC}
	${CC} ${CFLAGS} $^ -o ${NAME}

%.o:%.cpp
	${CC} ${CFLAGS} -c $^

clean: 
	rm -f main.o HumanA.o HumanB.o Weapon.o

fclean:clean
	rm -f human

re:fclean
	make

