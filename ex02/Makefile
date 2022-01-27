# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adidion <adidion@student.s19.be>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/18 12:11:50 by adidion           #+#    #+#              #
#    Updated: 2022/01/27 11:35:35 by adidion          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

CXX = c++

NAME =	ex02

SRCS =	main.cpp\
		ClapTrap.cpp\
		ScavTrap.cpp\
		FragTrap.cpp\

OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME):	$(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME) $(OBJS)

re: fclean all

.PHONY: re bonus clean fclean all