# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cledant <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/26 10:40:13 by cledant           #+#    #+#              #
#    Updated: 2017/02/11 13:40:18 by cledant          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc

CFLAGS = -Werror -Wall -Wextra

OBJ_DIR_NAME = obj

SRC_PATH = ./C

COLLEEN_FILE = Colleen.c

GRACE_FILE = Grace.c

SULLY_FILE = Sully.c

OBJ_COLLEEN = $(COLLEEN_FILE:%.c=$(OBJ_DIR_NAME)/%.o)

OBJ_GRACE = $(GRACE_FILE:%.c=$(OBJ_DIR_NAME)/%.o)

OBJ_SULLY = $(SULLY_FILE:%.c=$(OBJ_DIR_NAME)/%.o)

NAME_COLLEEN = Colleen

NAME_GRACE = Grace

NAME_SULLY = Sully

all :	$(OBJ_DIR_NAME) $(NAME_COLLEEN) $(NAME_GRACE) $(NAME_SULLY)

$(OBJ_DIR_NAME) :
	mkdir $(OBJ_DIR_NAME)

$(NAME_COLLEEN) : $(OBJ_COLLEEN)
	$(CC) $^ -o $@ $(CFLAGS)

$(NAME_GRACE) : $(OBJ_GRACE)
	$(CC) $^ -o $@ $(CFLAGS)

$(NAME_SULLY) : $(OBJ_SULLY)
	$(CC) $^ -o $@ $(CFLAGS)

$(OBJ_DIR_NAME)/%.o : $(SRC_PATH)/%.c
	$(CC) -o $@ -c $< $(CFLAGS)

clean :
	rm -rf $(OBJ_DIR_NAME)

fclean : clean
	rm -rf $(NAME_COLLEEN)
	rm -rf $(NAME_GRACE)
	rm -rf $(NAME_SULLY)

re : fclean all

.PHONY : all clean fclean re
