# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/02 10:47:11 by oabdelha          #+#    #+#              #
#    Updated: 2022/08/06 10:32:24 by oabdelha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = FragTrap

FLAG = -Wall -Wextra -Werror -std=c++98

CM = c++

SRC =  main.cpp ClapTrap.cpp  FragTrap.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CM) $(FLAG) $(OBJ) -o FragTrap

%.o : %.cpp
	@$(CM) $(FLAG) -o $@ -c $<

clean:
	@rm -rf $(OBJ)
	
fclean: clean
	@rm -rf $(NAME)

re: fclean all