# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/25 12:51:07 by oabdelha          #+#    #+#              #
#    Updated: 2022/07/25 12:52:15 by oabdelha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombie

FLAG = -Wall -Wextra -Werror -std=c++98

CM = c++

SRC =  main.cpp Zombie.cpp zombieHorde.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CM) $(FLAG) $(OBJ) -o Zombie

%.o : %.cpp
	@$(CM) $(FLAG) -o $@ -c $<

clean:
	@rm -rf $(OBJ)
	
fclean: clean
	@rm -rf $(NAME)

re: fclean all