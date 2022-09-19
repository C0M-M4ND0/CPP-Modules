# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/26 14:17:15 by oabdelha          #+#    #+#              #
#    Updated: 2022/07/26 18:16:35 by oabdelha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = replace

FLAG = -Wall -Wextra -Werror -std=c++98

CM = c++

SRC =  main.cpp Replace.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CM) $(FLAG) $(OBJ) -o replace

%.o : %.cpp
	@$(CM) $(FLAG) -o $@ -c $<

clean:
	@rm -rf $(OBJ)
	
fclean: clean
	@rm -rf $(NAME)

re: fclean all