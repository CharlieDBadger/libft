# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cbolanos <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/20 10:15:07 by cbolanos          #+#    #+#              #
#    Updated: 2024/12/20 10:19:35 by cbolanos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler and flags
CC = cc                  # The C compiler to use
CFLAGS = -Wall -Werror -Wextra  # Compiler flags to enable all warnings and treat them as errors

# The name of the static library
NAME = libft.a           # The name of the library file to generate

# List of source files for the functions
FUNCTIONS = ft_atoi.c \
           ft_bzero.c \
           ft_calloc.c \
           ft_isalnum.c \
           ft_isalpha.c \
           ft_isascii.c \
           ft_isdigit.c \
           ft_isprint.c \
           ft_itoa.c \
           ft_memchr.c \
           ft_memcmp.c \
           ft_memcpy.c \
           ft_memmove.c \
           ft_memset.c \
           ft_putchar_fd.c \
           ft_putendl_fd.c \
           ft_putnbr_fd.c \
           ft_putstr_fd.c \
           ft_split.c \
           ft_strchr.c \
           ft_strdup.c \
           ft_striteri.c \
           ft_strjoin.c \
           ft_strlcat.c \
           ft_strlcpy.c \
           ft_strlen.c \
           ft_strmapi.c \
           ft_strncmp.c \
           ft_strnstr.c \
           ft_strrchr.c \
           ft_strtrim.c \
           ft_substr.c \
           ft_tolower.c \
           ft_toupper.c

# Object files generated from the source files
OBJS = $(FUNCTIONS:%.c=%.o)

# Default target to build the library
all: $(NAME)

# Rule to create the static library
$(NAME): $(OBJS)           # Create the library using the object files
	ar rcs $(NAME) $^         # 'ar' is used to create the static library

# Rule to compile .c files into .o files
$(OBJS): %.o: %.c libft.h Makefile
	$(CC) -c $(CFLAGS) $< -o $@  # Compile each source file into an object file

# Rule to run Valgrind for memory leak checks
valgrind: $(NAME)
	valgrind --leak-check=full --track-fds=yes ./$(NAME)  # Run Valgrind with detailed memory leak reporting

# Clean up the object files
clean:
	rm -f $(OBJS)             # Remove the object files

# Clean up the object files and the library
fclean: clean
	rm -f $(NAME)              # Remove the static library

# Rebuild the library from scratch
re: fclean all

# Print the list of functions (for debugging purposes)
info:
	$(info $(FUNCTIONS))       # Display the list of function source files

# Declare these rules as phony (they are not actual files)
.PHONY: all clean fclean re info valgrind


