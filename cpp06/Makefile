# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/09 22:49:57 by amakela           #+#    #+#              #
#    Updated: 2024/11/09 22:51:03 by amakela          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	scalarConverter

CPPFILES	=	
 
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
