# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mconde-s <mconde-s@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/03/07 20:09:16 by mconde-s          #+#    #+#              #
#    Updated: 2026/07/14 00:54:22 by mconde-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

C_FILES = PhoneBook.cpp \
			Contact.cpp \
			Add.cpp \
			CheckAdd.cpp \
			CheckSearch.cpp \
			main.cpp
		  
O_FILES = ${C_FILES:.cpp=.o}

all: ${NAME}

${NAME}: ${O_FILES}
	c++ ${O_FILES} -o ${NAME}

clean:
	@rm -f ${O_FILES}

fclean: clean
	@rm -f ${NAME}

re: fclean all

%.o: %.cpp
	c++ -c -Wall -Wextra -Werror -std=c++98 -o $@ $<

.PHONY: all clean fclean re
