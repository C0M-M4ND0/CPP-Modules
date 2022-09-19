# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/27 16:27:28 by oabdelha          #+#    #+#              #
#    Updated: 2022/07/27 16:31:50 by oabdelha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harlFilter

FLAG = -Wall -Wextra -Werror -std=c++98

CM = c++

SRC =  main.cpp Harl.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CM) $(FLAG) $(OBJ) -o harlFilter

%.o : %.cpp
	@$(CM) $(FLAG) -o $@ -c $<

clean:
	@rm -rf $(OBJ)
	
fclean: clean
	@rm -rf $(NAME)

re: fclean all