# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: harndt <humberto.arndt@gmail.com>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/24 23:32:58 by harndt            #+#    #+#              #
#    Updated: 2022/05/30 18:04:08 by harndt           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:=	libftprintf.a
CC		:=	cc
CFLAGS	:=	-Wall -Werror -Wextra
LIBFT	:=	libft
HEADER	:=	-I ./includes -I $(LIBFT)
SRCS	:=	ft_printf.c			srcs/specifier_c.c			srcs/specifier_d.c	\
			srcs/specifier_p.c	srcs/specifier_percent.c	srcs/specifier_s.c	\
			srcs/specifier_u.c	srcs/specifier_upperx.c		srcs/specifier_x.c

OBJS	:=	$(SRCS:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJS)
	@$(MAKE) -C $(LIBFT)
	@mv $(LIBFT)/libft.a $@
	@ar rcs $@ $^
	@echo "Library $(NAME) created with success."

%.o:	%.c
	@cc $(CFLAGS) $(HEADER) -c $< -o $@
	@echo "Object $@ created with succes."

clean:
	@$(MAKE) clean -C $(LIBFT)
	@rm -f $(OBJS)
	@echo "All objects removed with success."

fclean:	clean
	@rm -f $(NAME)
	@echo "Library $(NAME) removed with success."

re: fclean all

.PHONY: all clean fclean re