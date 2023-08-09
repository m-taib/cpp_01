# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtaib <mtaib@student.1337.ma>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/18 18:16:15 by mtaib             #+#    #+#              #
#    Updated: 2023/07/23 16:54:30 by mtaib            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = Harl.cpp main.cpp
OSRC = $(SRC:.cpp=.o)

NAME = Harl
CFLAGS = -Wextra -Werror -Wall -std=c++98

%.o:%.cpp Harl.hpp	
	c++ -c $(CFLAGS) $<

all: $(NAME)

$(NAME) :$(OSRC)
		c++ $(CFLAGS) $^ -o $(NAME)

clean :
	@rm -f *.o
fclean :
	@rm -f *.o $(NAME) $(BONUS)
re : fclean all

.PHONY : all clean fclean re 
