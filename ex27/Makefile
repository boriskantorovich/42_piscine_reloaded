# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dfisher <dfisher@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/26 12:24:13 by dfisher           #+#    #+#              #
#    Updated: 2019/06/26 14:38:56 by dfisher          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
CC = gcc
CCFLAGS = -Wall -Wextra -Werror
SRC_PATH = src/
SRC = ft_display_file.c
OBJ = $(SRC:.c=.o)
OPTIONS = -o $(NAME) $(SRC_PATH)$(SRC)

all:
	$(CC) $(CCFLAGS) $(OPTIONS)

clean:
	/bin/rm -f $(OBJ)

fclean:	clean
	/bin/rm -f $(NAME)

re: fclean all
