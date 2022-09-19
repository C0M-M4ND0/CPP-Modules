# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/14 10:04:25 by oabdelha          #+#    #+#              #
#    Updated: 2022/08/17 12:13:00 by oabdelha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = array

FLAG = -Wall -Wextra -Werror -std=c++98

CX = c++

SRC = main.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CX) $(FLAG) $(OBJ) -o $(NAME)

%.o: %.cpp Array.hpp
	@$(CX) $(FLAG) -o $@ -c $<

clean:
	@rm -rf $(OBJ)
	
fclean: clean
	@rm -rf $(NAME)

re: fclean all