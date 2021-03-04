# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anserran <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/04 12:17:35 by anserran          #+#    #+#              #
#    Updated: 2021/03/04 12:21:10 by anserran         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

include libft.mk



SRC_DIR	= ./src

INC_DIR	= ./includes

OBJ_DIR	= ./obj



RAW_SRC	:= $(shell find $(SRC_DIR) -type f | grep -E "\.c$$")

RAW_DIRS:= $(shell find $(SRC_DIR) -mindepth 1 -type d)

SRCDIRS = $(RAW_DIRS:./src/%=%)

SRC		= $(RAW_SRC:./src/%=%)

OBJ		= $(addprefix $(OBJ_DIR)/,$(SRC:.c=.o))



CC		= gcc

CFLAGS	= -Wall -Wextra -Werror -pedantic -std=c99

CFLAGS += -O3 -march=native -pipe -flto



.PHONY: all clean fclean re

.PRECIOUS: libft.mk



all:

	@$(MAKE) $(OBJ_DIR) --no-print-directory

	@$(MAKE) $(FT_NAME) --no-print-directory



$(OBJ_DIR):

	mkdir -p $(OBJ_DIR)

	mkdir -p $(addprefix $(OBJ_DIR)/,$(SRCDIRS))



$(OBJ_DIR)/%.o:$(SRC_DIR)/%.c

	$(CC) $(CFLAGS) $(FT_INC) -o $@ -c $<



$(FT_NAME): $(OBJ)

	ar rc $(FT_NAME) $(OBJ)

	ranlib $(FT_NAME)



clean:

	rm -rf $(OBJ_DIR)



fclean: clean

	rm -f $(FT_NAME)



re:

	@$(MAKE) fclean --no-print-directory

	@$(MAKE) all --no-print-directory
