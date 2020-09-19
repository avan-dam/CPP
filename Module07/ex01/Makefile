# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: avan-dam <avan-dam@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/08/19 16:15:55 by avan-dam      #+#    #+#                  #
#    Updated: 2020/09/19 16:02:21 by avan-dam      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = convert

CXX = clang++

# G++ = /usr/local/bin/g++-10

FLAGS = -Wall -Wextra -Werror -pedantic -std=c++98

FILES = iter.cpp

all: $(NAME)

$(NAME): $(FILES)
	$(CXX) $(FILES) $(FLAGS) -o $(NAME)

# g++:
	# $(G++) $(FILES) $(FLAGS) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all
