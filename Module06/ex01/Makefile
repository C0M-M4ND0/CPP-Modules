# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/15 15:19:09 by oabdelha          #+#    #+#              #
#    Updated: 2022/08/15 15:51:53 by oabdelha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Serialization

FLAG = -Wall -Wextra -Werror -std=c++98

CX = c++

SRC = main.cpp Data.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CX) $(FLAG) $(OBJ) -o $(NAME)

%.o: %.cpp Data.hpp
	@$(CX) $(FLAG) -o $@ -c $<

clean:
	@rm -rf $(OBJ)
	
fclean: clean
	@rm -rf $(NAME)

re: fclean all