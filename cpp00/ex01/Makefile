# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/29 23:37:26 by amakela           #+#    #+#              #
#    Updated: 2024/11/09 23:27:56 by amakela          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	phonebook

CPPFILES	=	src/main.cpp	src/Contact.cpp		src/PhoneBook.cpp

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
