#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yabecret <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/22 18:01:01 by yabecret          #+#    #+#              #
#    Updated: 2018/08/22 22:52:02 by yabecret         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

# Executable
NAME 	= 	bsq

# Compilation
CC		= 	cc
CFLAGS	= 	-Wall -Wextra -Werror

# Files && Objs

FILES 	=	fill.c\
			parse_file.c\
			check_errors.c\
			functions.c\
			main.c\

OBJ	   = $(SRCS:.c=.o)

# **************************************************************************** #

# SPECIAL CHARS

LOG_CLEAR		= \033[2K
LOG_UP			= \033[A
LOG_NOCOLOR		= \033[0m
LOG_BOLD		= \033[1m
LOG_UNDERLINE	= \033[4m
LOG_BLINKING	= \033[5m
LOG_BLACK		= \033[1;30m
LOG_RED			= \033[1;31m
LOG_GREEN		= \033[1;32m
LOG_YELLOW		= \033[1;33m
LOG_BLUE		= \033[1;34m
LOG_VIOLET		= \033[1;35m
LOG_CYAN		= \033[1;36m
LOG_WHITE		= \033[1;37m

# Protect

.PHONY:	clean fclean

# **************************************************************************** #

# RULES

# Main rules
all				: 	$(NAME)

re				: 	fclean all

# Compilation rules

$(NAME)			: 	$(OBJ)
					@echo "-------------------------------------------------------------"
					@echo "|                  Debut de la compilation                  |"
					@echo "|                            42                             |"
					@echo "|                                                           |"
					@echo "|                     	compilation :                       |"
					@echo "|                           BSQ                             |"
					@$(CC) $(CFLAGS) -o $(NAME) $(FILES) 
					@echo "|                        CAKE DONE !                        |"
					@echo "-------------------------------------------------------------"
# Clean rules
clean			:
					@rm -rf $(OBJ)

fclean			: 	clean
					@rm -f $(NAME)

# **************************************************************************** #
