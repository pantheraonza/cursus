# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: criredon <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/31 13:16:14 by criredon          #+#    #+#              #
#    Updated: 2026/05/31 13:16:17 by criredon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Library name
NAME    = libft.a

# Compiler and flags
CC      = cc
CFLAGS  = -Wall -Wextra -Werror
AR      = ar rcs
RM      = rm -f

# Directories
SRC_DIR = srcs
INC_DIR = includes

# Source files
SRC     = $(SRC_DIR)/ft_putchar.c \
          $(SRC_DIR)/ft_putstr.c \
          $(SRC_DIR)/ft_strcmp.c \
          $(SRC_DIR)/ft_strlen.c \
          $(SRC_DIR)/ft_swap.c

# Object files
OBJ     = $(SRC:.c=.o)

# Main rule
all: $(NAME)

# Final compilation
$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

# Compile .c -> .o
%.o: %.c
	$(CC) $(CFLAGS) -I $(INC_DIR) -c $< -o $@

# Remove object files
clean:
	$(RM) $(OBJ)

# Remove everything
fclean: clean
	$(RM) $(NAME)

# Recompile
re: fclean all

# Avoid file name conflicts
.PHONY: all clean fclean re