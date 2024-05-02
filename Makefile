# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jfleming <jfleming@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/29 15:10:12 by jfleming          #+#    #+#              #
#    Updated: 2024/05/02 13:11:17 by jfleming         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
	ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c \
	ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
	ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c \
	ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c \
	ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c \
	ft_tolower.c ft_toupper.c

OBJS = $(SRCS:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)
	ar rcs $@ $^// 'ar' create, modify, and extract files from archives
					typically static libraries.
				// 'r' specifies that 'ar' should insert the files
					listed into the archive.
				// 'c'  instructs 'ar' to create the archive if it
				   doesn't already exist.
				// 's' tells 'ar' to write an index (or symbol table)
				   to the archive.
				// So, ar rcs together means to create an archive,
					add the specified files to it, and write an index
					for faster access. In the context of the makefile
					command.

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm -f $(OBJS) // -f forca sem pedir confirmacao

fclean:	clean // After removing the object files (clean), it proceeds
			  // to remove the executable or library file specified
			  // by $(NAME).
	rm -f $(NAME)

re:	fclean all // It ensures that the entire project is rebuilt
			   // from scratch after cleaning up.

.PHONY : all clean fclean re
