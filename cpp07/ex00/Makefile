# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/22 11:01:38 by amakela           #+#    #+#              #
#    Updated: 2024/11/26 14:41:07 by amakela          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	templates

SRCS		=	src/main.cpp
 
OBJS		=	$(SRCS:.cpp=.o)

HEADERS		=	-I include

CXX			=	c++ -std=c++98

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
