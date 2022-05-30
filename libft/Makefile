# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: harndt <harndt@student.42sp.org.br>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/24 23:32:40 by harndt            #+#    #+#              #
#    Updated: 2022/05/26 01:05:31 by harndt           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a
HEADER := libft.h
CC := cc
CFLAGS := -Wall -Werror -Wextra
SRCS := ft_atoi.c		ft_bzero.c		ft_calloc.c		\
		ft_isalnum.c	ft_isalpha.c	ft_isascii.c	\
		ft_isdigit.c	ft_isprint.c	ft_memchr.c		\
		ft_memcmp.c		ft_memcpy.c		ft_memmove.c	\
		ft_memset.c		ft_strchr.c		ft_strdup.c		\
		ft_strlcat.c	ft_strlcpy.c	ft_strlen.c		\
		ft_strncmp.c	ft_strnstr.c	ft_strrchr.c	\
		ft_tolower.c	ft_toupper.c

SRCS += ft_substr.c		ft_strjoin.c	ft_strtrim.c	\
		ft_split.c		ft_itoa.c		ft_strmapi.c	\
		ft_striteri.c	ft_putchar_fd.c	ft_putstr_fd.c	\
		ft_putendl_fd.c	ft_putnbr_fd.c

SRCS += ft_putchar.c	ft_strnchr.c	ft_utoa_base.c	\
		ft_putstr.c


OBJS := $(SRCS:.c=.o)

BONUS_SRCS :=	ft_lstnew.c		ft_lstadd_front.c	ft_lstsize.c	\
				ft_lstlast.c	ft_lstadd_back.c	ft_lstdelone.c	\
				ft_lstclear.c	ft_lstiter.c		ft_lstmap.c

BONUS_OBJS := $(BONUS_SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@ar -rc $(NAME) $(OBJS)
	@echo "Library $(NAME) created with success."
	@ranlib $(NAME)
	@echo "Library $(NAME) indexed with success."

#Original
#bonus: $(OBJS) $(BONUS_OBJS)
#	@ar -rc $(NAME) $^
#	@ranlib $(NAME)
#	@echo "Bonus object created with success."

bonus: $(BONUS_OBJS)
	@make OBJS=$(OBJS) $(BONUS_OBJS) all

#Original
#%.o: %.c $(HEADER)
#	@$(CC) $(CFLAGS) -c $< -o $@
#	@echo "Object $< created with success."

clean:
	@rm -f $(OBJS) $(BONUS_OBJS)
	@echo "All objects removed with success."

fclean: clean
	@rm -f $(NAME)
	@echo "Library $(NAME) removed with success."

re: fclean all

.PHONY: all, bonus, clean, fclean, re, .o