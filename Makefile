# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aymoulou <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/09 14:41:11 by aymoulou          #+#    #+#              #
#    Updated: 2021/08/31 13:28:51 by macbook          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
RED = \033[1;31m
GREEN = \033[1;32m
YELLOW = \033[1;33m
BLUE = \033[1;34m
RESET = \033[0m


SRC = ft_atoi.c ft_strlen.c ft_putstr_fd.c ft_putchar_fd.c ft_putnbr_fd.c \
		ft_putendl_fd.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isprint.c \
		ft_isascii.c ft_toupper.c ft_tolower.c ft_memset.c ft_bzero.c \
		ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strlcpy.c ft_strlcat.c \
		ft_strdup.c ft_calloc.c ft_memcpy.c ft_memccpy.c ft_memmove.c \
		ft_memcmp.c ft_memchr.c ft_substr.c ft_strjoin.c ft_strtrim.c \
		ft_split.c ft_itoa.c ft_strmapi.c ft_strnstr.c ft_lstadd_back.c	\
		ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c \
		ft_lstlast.c ft_lstsize.c ft_lstnew.c ft_lstmap.c
OBJ = $(SRC:%.c=%.o)
CC = gcc
CFLAGS = -Wall -Werror -Wextra

all: $(NAME)

drawing:
	@echo "$(BLUE)█████████████████████████ Making LIBFT █████████████████████████$(RESET)"

$(NAME): drawing $(OBJ)
	@echo "$(BLUE)█ $(YELLOW)Create and maintain library archives$(RESET) for all .o:\r\t\t\t\t\t\t\t$(GREEN){DONE}$(BLUE) █$(RESET)"
	@ar rc $(NAME) $(OBJ)
	@echo "$(BLUE)█ $(YELLOW)Creating$(RESET) $@:\r\t\t\t\t\t\t\t$(GREEN){DONE}$(BLUE) █$(RESET)"
	@ranlib $(NAME)
	@echo "$(BLUE)███████████████████████ Compiling is DONE ██████████████████████$(RESET)"	

%.o: %.c
	@echo "$(BLUE)█ $(YELLOW)Compiling$(RESET) $<:\r\t\t\t\t\t\t\t$(GREEN){DONE}$(BLUE) █$(RESET)"
	@$(CC) $(CFLAGS) -c $<

clean:
	@echo "$(RED)deleting$(RESET): libft objects"
	@/bin/rm -f $(OBJ) $(BONUS_OBJ)

fclean: clean
	@echo "$(RED)deleting$(RESET): $(NAME)"
	@/bin/rm -f $(NAME)

re: fclean all

