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

# Executable name
NAME    = ft_display_file

# Compiler and flags
CC      = cc
CFLAGS  = -Wall -Wextra -Werror
RM      = rm -f

# Source files
SRC     = ft_display_file.c

# Object files
OBJ     = $(SRC:.c=.o)

# Main rule
all: $(NAME)

# Final compilation
$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

# Compile .c -> .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

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