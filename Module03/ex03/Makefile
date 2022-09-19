# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/02 10:47:11 by oabdelha          #+#    #+#              #
#    Updated: 2022/08/06 11:08:18 by oabdelha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = DiamondTrap

FLAG = -Wall -Wextra -Werror -std=c++98

CM = c++

SRC =  main.cpp ClapTrap.cpp  FragTrap.cpp ScavTrap.cpp DiamondTrap.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CM) $(FLAG) $(OBJ) -o DiamondTrap

%.o : %.cpp
	@$(CM) $(FLAG) -o $@ -c $<

clean:
	@rm -rf $(OBJ)
	
fclean: clean
	@rm -rf $(NAME)

re: fclean all