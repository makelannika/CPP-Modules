# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/05 00:10:57 by amakela           #+#    #+#              #
#    Updated: 2024/11/09 23:34:04 by amakela          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	braiiiiiiinnnzzzZ

SRCS		=	src/main.cpp		src/Zombie.cpp		\
				src/newZombie.cpp	src/randomChump.cpp
 
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
