# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/14 15:27:57 by amakela           #+#    #+#              #
#    Updated: 2024/11/09 23:28:09 by amakela          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	theJobOfYourDreams

CPPFILES	=	src/Account.cpp		src/tests.cpp

OFILES		=	$(CPPFILES:.cpp=.o)

HEADERS		=	-I include

CXX			=	c++

FLAGS		=	-Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OFILES)
	$(CXX) $(OFILES) -o $(NAME)
	
%.o:%.cpp
	$(CXX) $(FLAGS) $(HEADERS) -c $< -o $@

clean:
	rm -f $(OFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
