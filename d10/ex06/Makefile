#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yabecret <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/17 14:43:28 by yabecret          #+#    #+#              #
#    Updated: 2018/08/17 14:53:39 by yabecret         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

# Binary
NAME = do-op

SRCS = 	do_op.c\
		ft_atoi.c\
		functions.c\
		main.c\

OBJ = $(SRCS:.c=.o)

# Compilation

CC = cc
CFLAGS = -Wall -Wextra -Werror

# Main rules
all: $(NAME)

$(NAME): $(OBJ)
		$(CC) $(FLAGS) -o $(NAME) $(SRCS)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

# Security
.PHONY: all clean fclean re