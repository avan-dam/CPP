# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: Amber <Amber@student.codam.nl>               +#+                      #
#                                                    +#+                       #
#    Created: 2020/09/17 15:16:17 by Amber         #+#    #+#                  #
#    Updated: 2020/09/17 15:16:25 by Amber         ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = span

CXX = clang++

G++ = /usr/local/bin/g++-10

FLAGS = -Wall -Wextra -Werror -pedantic -std=c++98

FILES = main.cpp span.cpp

all: $(NAME)

$(NAME): $(FILES)
	$(CXX) $(FILES) $(FLAGS) -o $(NAME)

g++:
	$(G++) $(FILES) $(FLAGS) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all
