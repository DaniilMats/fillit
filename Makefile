# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: edestiny <edestiny@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/14 11:01:15 by edestiny          #+#    #+#              #
#    Updated: 2019/05/25 17:44:06 by mswarthy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 			= 		fillit

SRC_NAME		= 		main.c valid_tetr.c val_read.c solve.c list_operations.c free_karta.c

SRC_PATH		= 		./src/
LIBFT_PATH		= 		./libft

SRC				= 		$(addprefix $(SRC_PATH), $(SRC_NAME))
OBJ				= 		$(SRC_NAME:.c=.o)

FLAG			= 		-Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ) lib
	@gcc $(FLAG) $(OBJ) $(LIBFT_PATH)/libft.a -o $(NAME) 

$(OBJ):
	@gcc $(FLAG) $(SRC) -c -I ./includes -I $(LIBFT_PATH) 

lib:
	@make -C $(LIBFT_PATH)

clean:
	@rm -f $(OBJ)
	@make clean -C $(LIBFT_PATH)

fclean: clean
	@rm -f $(NAME)
	@make fclean -C $(LIBFT_PATH)

re: fclean all