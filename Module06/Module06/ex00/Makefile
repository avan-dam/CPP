# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: avan-dam <avan-dam@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/08/19 16:15:55 by avan-dam      #+#    #+#                  #
#    Updated: 2020/09/09 17:17:04 by Amber         ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = convert

CXX = clang++

FLAGS = -Wall -Wextra -Werror -pedantic -std=c++98

FILES = main.cpp checks.cpp letsgo.cpp

all: $(NAME)

$(NAME): $(FILES)
	$(CXX) $(FILES) $(FLAGS) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all
