# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/24 10:59:58 by oabdelha          #+#    #+#              #
#    Updated: 2022/08/27 11:00:09 by oabdelha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = EasyFind

FLAG = -Wall -Wextra -Werror -std=c++98

CX = c++

SRC = main.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CX) $(FLAG) $(OBJ) -o $(NAME)

%.o: %.cpp  easyfind.hpp
	@$(CX) $(FLAG) -o $@ -c $<

clean:
	@rm -rf $(OBJ)
	
fclean: clean
	@rm -rf $(NAME)

re: fclean all