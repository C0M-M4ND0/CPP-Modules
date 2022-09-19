# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/10 08:06:56 by oabdelha          #+#    #+#              #
#    Updated: 2022/08/10 08:07:49 by oabdelha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Bureaucrat

FLAG = -Wall -Wextra -Werror -std=c++98

CM = c++

SRC =  main.cpp Bureaucrat.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CM) $(FLAG) $(OBJ) -o Bureaucrat

%.o : %.cpp Bureaucrat.hpp
	@$(CM) $(FLAG) -o $@ -c $<

clean:
	@rm -rf $(OBJ)
	
fclean: clean
	@rm -rf $(NAME)

re: fclean all