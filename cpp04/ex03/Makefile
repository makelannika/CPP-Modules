# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/27 18:20:39 by amakela           #+#    #+#              #
#    Updated: 2024/11/09 23:40:51 by amakela          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	program

SRCS		=	src/main.cpp	src/AMateria.cpp	src/Cure.cpp			\
				src/Ice.cpp		src/Character.cpp	src/MateriaSource.cpp
 
OBJS		=	$(SRCS:.cpp=.o)

HEADERS		=	-I include

CXX			=	c++ -std=c++11

FLAGS		=	-Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(FLAGS) $(OBJS) -o $(NAME)

%.o:%.cpp
	$(CXX) $(FLAGS) $(HEADERS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
