# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/29 23:37:14 by amakela           #+#    #+#              #
#    Updated: 2024/11/09 23:27:44 by amakela          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	megaphone

CPPFILES	=	megaphone.cpp

OFILES		=	$(CPPFILES:.cpp=.o)

CXX			=	c++

FLAGS		=	-Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OFILES)
	$(CXX) $(FLAGS) $(OFILES) -o $(NAME)

%.o:%.cpp
	$(CXX) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
