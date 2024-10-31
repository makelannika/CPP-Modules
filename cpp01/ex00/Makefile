# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/05 00:10:57 by amakela           #+#    #+#              #
#    Updated: 2024/08/14 21:09:40 by amakela          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	braiiiiiiinnnzzzZ

CPPFILES	=	src/main.cpp		src/Zombie.cpp		\
				src/newZombie.cpp	src/randomChump.cpp
 
OFILES		=	$(CPPFILES:.cpp=.o)

HEADERS		=	-I include

CC			=	c++

FLAGS		=	-Wall -Wextra -Werror

%.o:%.cpp
	$(CC) $(FLAGS) $(HEADERS) -c $< -o $@

all: $(NAME)

$(NAME): $(OFILES)
	$(CC) $(FLAGS) $(OFILES) -o $(NAME)

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
