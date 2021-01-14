# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ssb <marvin@42.fr>                         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/07 19:07:58 by ssb               #+#    #+#              #
#    Updated: 2021/01/15 07:24:21 by ssb              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRCS = ft_printf.c \
		ft_flag_set.c \
		ft_putchar.c \
		ft_type_path.c \
		ft_type_char.c \
		ft_putwidth.c \
		ft_type_string.c \
		ft_type_int.c \
		ft_type_unint.c \
		ft_unitoa.c \
		ft_type_percent.c \
		ft_type_hexa.c \
		ft_str_upper.c \
		ft_change_base.c \
		ft_type_pointer_add.c
OBJS = $(SRCS:.c=.o)
LIBC = ar -rcs
FLAGS = -Wall -Wextra -Werror
LIBFTD = ./libft
LIBFT = libft.a

$(NAME) : $(OBJS)
	$(MAKE) -C $(LIBFTD)
	cp $(LIBFTD)/$(LIBFT) $(NAME)
	$(CC) -c $(FLAGS) $(SRCS)
	$(LIBC) $(NAME) $(OBJS)

all : $(NAME)

clean : 
	$(MAKE) clean -C $(LIBFTD)
	$(RM) $(OBJS)

fclean : clean
	$(MAKE) fclean -C $(LIBFTD)
	$(RM) $(NAME)

re: fclean all
