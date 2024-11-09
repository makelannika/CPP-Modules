# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/06 21:26:44 by amakela           #+#    #+#              #
#    Updated: 2024/11/09 23:41:48 by amakela          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	forms

SRCS		=	src/ShrubberyCreationForm.cpp	src/AForm.cpp		\
				src/RobotomyRequestForm.cpp		src/Bureaucrat.cpp	\
				src/PresidentialPardonForm.cpp	src/main.cpp
 
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
