# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mconde-s <mconde-s@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/02 16:51:39 by mconde-s          #+#    #+#              #
#    Updated: 2026/02/02 17:19:17 by mconde-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

C_FILES = megaphone.cpp
		  
		  
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
