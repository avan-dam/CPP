# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: avan-dam <avan-dam@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/08/19 16:15:48 by avan-dam      #+#    #+#                  #
#    Updated: 2020/09/03 15:02:38 by Amber         ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = executable.out

CXX = clang++

# G++ = /usr/local/bin/g++-10

FLAGS = -Wall -Wextra -Werror -pedantic -std=c++98

FILES = main.cpp Peon.cpp Sorcerer.cpp Victim.cpp Zombo.cpp

all: $(NAME)

$(NAME):
	$(CXX) $(FILES) $(FLAGS) -o $(NAME)

# g++:
	# $(G++) $(FILES) $(FLAGS) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all
