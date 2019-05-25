# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: edestiny <edestiny@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/04/14 13:19:54 by edestiny          #+#    #+#              #
#    Updated: 2019/05/14 11:28:55 by edestiny         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a

SRCS_DIR	= 	./

HEADER		= 	./

FLAGS		= 	-Wall -Wextra -Werror -c

SRCSFILES	=	ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
				ft_isdigit.c ft_isprint.c ft_itoa.c ft_memalloc.c ft_memccpy.c \
				ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memdel.c ft_memmove.c \
				ft_memset.c ft_putchar_fd.c ft_putchar.c ft_putendl_fd.c \
				ft_putendl.c ft_putnbr_fd.c ft_putnbr.c ft_putstr_fd.c ft_putstr.c \
				ft_strcat.c ft_strchr.c ft_strclr.c ft_strcmp.c ft_strcpy.c \
				ft_strdel.c ft_strdup.c ft_strequ.c ft_striter.c ft_striteri.c \
				ft_strjoin.c ft_strlcat.c ft_strlen.c ft_strmap.c ft_strmapi.c \
				ft_strncat.c ft_strncmp.c ft_strncpy.c ft_strnequ.c ft_strnew.c \
				ft_strnstr.c ft_strrchr.c ft_strsplit.c ft_strstr.c ft_strsub.c \
				ft_strtrim.c ft_tolower.c ft_toupper.c ft_lstnew.c ft_lstdelone.c \
				ft_lstdel.c ft_lstadd.c ft_lstiter.c ft_lstmap.c ft_delarray.c \
				ft_count_words.c

SRCS		=	$(addprefix $(SRCS_DIR), $(SRCSFILES))

OBJ			=	$(SRCSFILES:.c=.o)

$(NAME):
		@gcc $(FLAGS) $(SRCS) -I $(HEADER)
		@ar rc $(NAME) $(OBJ)

all: $(NAME)

clean:
		@rm -f $(OBJ)

fclean: clean
		@rm -f $(NAME)

re: fclean all
