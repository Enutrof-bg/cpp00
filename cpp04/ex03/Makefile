# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kevwang <kevwang@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/22 13:34:08 by kevwang           #+#    #+#              #
#    Updated: 2025/10/22 13:34:08 by kevwang          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

FILE = main.cpp AMateria.cpp Cure.cpp Character.cpp

NAME = materia

SRC = ${FILE:.cpp=.o}

all:${NAME}

${NAME}: ${SRC}
	${CXX} ${CXXFLAGS} $^ -o ${NAME}

%.o:%.cpp
	${CXX} ${CXXFLAGS} -c $^

clean: 
	rm -f main.o AMateria.o Cure.o Character.o

fclean:clean
	rm -f materia

re:fclean all



