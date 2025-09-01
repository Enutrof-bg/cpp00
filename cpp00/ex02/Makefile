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

all:${NAME}

${NAME}: ${FILE}
	${CC} ${CFLAGS} $^ -o ${NAME}

clean: 
	rm -f account

fclean:clean

re:fclean
	make