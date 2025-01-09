# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cbolanos <cbolanos@student.42barcelon      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/08 13:25:46 by cbolanos          #+#    #+#              #
#    Updated: 2025/01/08 13:25:50 by cbolanos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler and flags
CC = cc
CFLAGS = -Wall -Werror -Wextra

# The name of the static library
NAME = libft.a

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

# Object files generated from bonus source files 
BONUS =	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c  ft_lstclear.c ft_lstiter.c ft_lstmap.c

BOBJS = $(BONUS:%.c=%.o)

# Default target to build the library
all: $(NAME)

# Rule to create the static library
$(NAME): $(OBJS)
	ar rcs $(NAME) $^

bonus: $(OBJS) $(BOBJS)
	ar rcs $(NAME) $^	

# Rule to compile .c files into .o files
$(OBJS): %.o: %.c libft.h Makefile
	$(CC) -c $(CFLAGS) $< -o $@

$(BOBJS): %.o: %.c libft.h
	$(CC) -c $(CFLAGS) $< -o $@

# Rule to run Valgrind for memory leak checks
valgrind: $(NAME)
	valgrind --leak-check=full --track-fds=yes ./$(NAME)

# Clean up the object files
clean:
	rm -f $(OBJS)
	rm -f $(BOBJS)

# Clean up the object files and the library
fclean: clean
	rm -f $(NAME)

# Rebuild the library from scratch
re: fclean all

# Print the list of functions (for debugging purposes)
info:
	$(info $(FUNCTIONS))

# Declare these rules as phony (they are not actual files)
.PHONY: all clean fclean re info valgrind


