# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: Amber <Amber@student.codam.nl>               +#+                      #
#                                                    +#+                       #
#    Created: 2020/09/23 12:09:12 by Amber         #+#    #+#                  #
#    Updated: 2020/09/23 12:52:34 by Amber         ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = mutantstack

CXX = clang++

G++ = /usr/local/bin/g++-10

FLAGS = -Wall -Wextra -Werror -pedantic -std=c++98

FILES = main.cpp mutantstack.cpp

all: $(NAME)

$(NAME): $(FILES)
	$(CXX) $(FILES) $(FLAGS) -o $(NAME)

g++:
	$(G++) $(FILES) $(FLAGS) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all
