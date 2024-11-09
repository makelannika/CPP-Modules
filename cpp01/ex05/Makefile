# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/13 23:17:39 by amakela           #+#    #+#              #
#    Updated: 2024/11/09 23:36:19 by amakela          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	harl2.0

SRCS		=	src/main.cpp	src/Harl.cpp
 
OBJS		=	$(SRCS:.cpp=.o)

HEADERS		=	-I include

CXX			=	c++

FLAGS		=	-Wall -Wextra -Werror

%.o:%.cpp
	$(CXX) $(FLAGS) $(HEADERS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(FLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
