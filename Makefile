# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ssb <marvin@42.fr>                         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/07 19:07:58 by ssb               #+#    #+#              #
#    Updated: 2021/01/14 04:53:34 by ssb              ###   ########.fr        #
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
		ft_type_int.c
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
