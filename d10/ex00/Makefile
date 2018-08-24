#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yabecret <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/17 10:52:44 by yabecret          #+#    #+#              #
#    Updated: 2018/08/18 12:53:47 by yabecret         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

# Binary
NAME = libft.a

# Directories
INCDIR = includes/

# Sources
SRCS = 	srcs/ft_putchar.c\
		srcs/ft_putstr.c\
		srcs/ft_strcmp.c\
		srcs/ft_strlen.c\
		srcs/ft_swap.c\

OBJ = $(SRCS:.c=.o)

# Compilation
CC = cc
CFLAGS = -Wall -Wextra -Werror

# Main rules
all: $(NAME)

$(NAME): $(OBJ) $(INCDIR)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

clean:
	@rm -f $(OBJ)

fclean : clean
	@rm -f $(NAME)

re: fclean all

# Security
.PHONY: all clean fclean re