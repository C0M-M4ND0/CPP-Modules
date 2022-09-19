# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/27 16:11:58 by oabdelha          #+#    #+#              #
#    Updated: 2022/07/27 16:20:02 by oabdelha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harl

FLAG = -Wall -Wextra -Werror -std=c++98

CM = c++

SRC =  main.cpp Harl.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CM) $(FLAG) $(OBJ) -o harl

%.o : %.cpp
	@$(CM) $(FLAG) -o $@ -c $<

clean:
	@rm -rf $(OBJ)
	
fclean: clean
	@rm -rf $(NAME)

re: fclean all