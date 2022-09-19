# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/08 11:05:13 by oabdelha          #+#    #+#              #
#    Updated: 2022/08/19 19:05:11 by oabdelha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Animal

FLAG = -Wall -Wextra -Werror -std=c++98

CM = c++

SRC =  main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CM) $(FLAG) $(OBJ) -o Animal

%.o : %.cpp Animal.hpp Dog.hpp Cat.hpp Brain.hpp
	@$(CM) $(FLAG) -o $@ -c $<

clean:
	@rm -rf $(OBJ)
	
fclean: clean
	@rm -rf $(NAME)

re: fclean all