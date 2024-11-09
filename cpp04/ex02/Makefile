# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/27 17:49:20 by amakela           #+#    #+#              #
#    Updated: 2024/11/09 23:40:33 by amakela          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	animal

SRCS		=	src/main.cpp		src/AAnimal.cpp			src/Dog.cpp			\
				src/Cat.cpp			src/Brain.cpp
 
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
