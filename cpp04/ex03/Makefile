# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/27 18:20:39 by amakela           #+#    #+#              #
#    Updated: 2024/08/28 20:26:01 by amakela          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	program

CPPFILES	=	src/main.cpp	src/AMateria.cpp	src/Cure.cpp			\
				src/Ice.cpp		src/Character.cpp	src/MateriaSource.cpp
 
OFILES		=	$(CPPFILES:.cpp=.o)

HEADERS		=	-I include

CC			=	c++ -std=c++11

FLAGS		=	-Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OFILES)
	$(CC) $(FLAGS) $(OFILES) -o $(NAME)

%.o:%.cpp
	$(CC) $(FLAGS) $(HEADERS) -c $< -o $@

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
