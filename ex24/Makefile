# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dfisher <dfisher@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/03/16 16:02:20 by dfisher           #+#    #+#              #
#    Updated: 2019/06/26 13:53:42 by dfisher          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CCFLAGS = -Wall -Wextra -Werror
SRCS = srcs/*.c
OBJ = *.o
INCLUDES = includes/
OPTIONS = -c $(SRCS) -I $(INCLUDES)

all:
	$(CC) $(CCFLAGS) $(OPTIONS)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
