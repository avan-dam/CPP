# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: avan-dam <avan-dam@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/08/19 16:15:55 by avan-dam      #+#    #+#                  #
#    Updated: 2020/08/19 16:17:02 by avan-dam      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = executable.out

CXX = clang++

FLAGS = -Wall -Wextra -Werror -pedantic -std=c++98

FILES = main.cpp AWeapon.cpp Character.cpp Enemy.cpp MyEnemy.cpp MyWeapon.cpp \
PlasmaRifle.cpp PowerFist.cpp RadScorpion.cpp SuperMutant.cpp

all: $(NAME)

$(NAME):
	$(CXX) $(FILES) $(FLAGS) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean
