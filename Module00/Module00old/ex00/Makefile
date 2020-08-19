# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: avan-dam <avan-dam@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/07/27 16:02:55 by avan-dam      #+#    #+#                  #
#    Updated: 2020/07/27 16:02:57 by avan-dam      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRCS = megaphone.cpp

FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(SRCS)
	clang++ $(FLAGS) $(SRCS) -o $(NAME)

clean: clean
	/bin/rm -f $(NAME)

re: clean all

.PHONY: all clean re