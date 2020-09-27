# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: avan-dam <avan-dam@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/07/27 16:03:21 by avan-dam      #+#    #+#                  #
#    Updated: 2020/07/27 17:51:58 by avan-dam      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

SRCS = phonebook.cpp main.cpp

FLAGS = -Wall -Werror -Wextra

# INCLUDES = phonebook.hpp
# ??

all: $(NAME)

$(NAME): $(SRCS)
	clang++ $(FLAGS) $(SRCS) -o $(NAME)

clean: clean
	/bin/rm -f $(NAME)

re: clean all

.PHONY: all clean re