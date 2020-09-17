# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: Amber <Amber@student.codam.nl>               +#+                      #
#                                                    +#+                       #
#    Created: 2020/09/17 08:23:00 by Amber         #+#    #+#                  #
#    Updated: 2020/09/17 08:23:12 by Amber         ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = easyfind

CXX = clang++

G++ = /usr/local/bin/g++-10

FLAGS = -Wall -Wextra -Werror -pedantic -std=c++98

FILES = main.cpp

all: $(NAME)

$(NAME): $(FILES)
	$(CXX) $(FILES) $(FLAGS) -o $(NAME)

g++:
	$(G++) $(FILES) $(FLAGS) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all
