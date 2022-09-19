# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oabdelha <oabdelha@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/16 13:42:08 by oabdelha          #+#    #+#              #
#    Updated: 2022/07/23 09:47:04 by oabdelha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PhoneBook

FLAG = -Wall -Wextra -Werror -std=c++98

CM = c++

SRC = main.cpp PhoneBook.cpp Contact.cpp utils.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CM) $(FLAG) $(OBJ) -o PhoneBook

%.o : %.cpp
	@$(CM) $(FLAG) -o $@ -c $<

clean:
	@rm -rf $(OBJ)
	
fclean: clean
	@rm -rf $(NAME)

re: fclean all