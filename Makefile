# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aboitier <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/16 15:29:02 by aboitier          #+#    #+#              #
#    Updated: 2019/05/21 20:46:51 by aboitier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 	libft.a
SRCS = 	ft_lstadd.c     ft_memset.c     ft_strcpy.c     ft_strncpy.c\
		ft_lstdel.c     ft_putchar.c    ft_strdel.c     ft_strnequ.c\
		ft_lstdelone.c  ft_putchar_fd.c ft_strdup.c     ft_strnew.c\
		ft_lstiter.c    ft_putendl.c    ft_strequ.c     ft_strnstr.c\
		ft_atoi.c       ft_lstmap.c     ft_putendl_fd.c ft_striter.c    ft_strsplit.c\
		ft_bzero.c      ft_lstnew.c     ft_putnbr.c     ft_striteri.c   ft_strstr.c\
		ft_isalnum.c    ft_memalloc.c   ft_putnbr_fd.c  ft_strjoin.c    ft_strsub.c\
		ft_isalpha.c    ft_memccpy.c    ft_putstr.c     ft_strlcat.c    ft_strtrim.c\
		ft_isascii.c    ft_memchr.c     ft_putstr_fd.c  ft_strlen.c     ft_tolower.c\
		ft_isdigit.c    ft_memcmp.c     ft_strcat.c     ft_strmap.c     ft_toupper.c\
		ft_isprint.c    ft_memcpy.c     ft_strchr.c     ft_strmapi.c	ft_strrchr.c\
		ft_isspace.c    ft_memdel.c     ft_strclr.c     ft_strncat.c	ft_strndup.c\
		ft_strrev.c		ft_recursive_power.c	ft_print_words_tables.c ft_itoa.c\
		ft_memmove.c    ft_strcmp.c     ft_strncmp.c	ft_strrchr.c\
		ft_sort_integer_table.c ft_addonechar.c ft_putnbr_base.c ft_count_words.c\
		ft_rm_word.c ft_get_numbers.c ft_strclen.c ft_strcdup.c get_next_line.c
		
OBJECTS = $(SRCS:.c=.o)
INCLUDE = libft.h
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
AR = ar rcs

GREEN	= '\x1b[32m'
RED		= '\x1b[31m'
END		= '\x1b[0m'

all: $(NAME)

$(NAME): $(OBJECTS)
	@$(AR) $(NAME) $(OBJECTS)
	@echo "$(GREEN) $(NAME) has been created & index created$(END)"

%.o: %.c $(INCLUDE)
	@$(CC) $(CFLAGS) -o $@ -c $<

clean:  
	@$(RM) $(OBJECTS)
	@echo "$(RED) objects have been removed $(END)"
	
fclean: clean
	@$(RM) $(NAME)
	@echo "$(RED) $(NAME) have been removed $(END)"

re: fclean all
