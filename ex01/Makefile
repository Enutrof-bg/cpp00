# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kevwang <kevwang@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/09 16:33:41 by kevwang           #+#    #+#              #
#    Updated: 2025/07/09 16:33:44 by kevwang          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

FILE = phonebook.cpp

NAME = phonebook

all:${NAME}

${NAME}: ${FILE}
	${CC} ${CFLAGS} $^ -o ${NAME}

clean: 
	rm -f phonebook

fclean:clean

re:fclean
	make