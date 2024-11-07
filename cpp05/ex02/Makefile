# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/06 21:26:44 by amakela           #+#    #+#              #
#    Updated: 2024/11/07 17:27:55 by amakela          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	form

CPPFILES	=	src/ShrubberyCreationForm.cpp	src/AForm.cpp		\
				src/RobotomyRequestForm.cpp		src/Bureaucrat.cpp	\
				src/PresidentialPardonForm.cpp	src/main.cpp
 
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
