# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/29 17:57:56 by oabdelha          #+#    #+#              #
#    Updated: 2022/08/10 18:50:28 by oabdelha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fixed

FLAG = -Wall -Wextra -Werror -std=c++98

CM = c++

SRC =  main.cpp Fixed.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CM) $(FLAG) $(OBJ) -o fixed

%.o : %.cpp Fixed.hpp
	@$(CM) $(FLAG) -o $@ -c $<

clean:
	@rm -rf $(OBJ)
	
fclean: clean
	@rm -rf $(NAME)

re: fclean all