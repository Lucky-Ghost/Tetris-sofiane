##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile
##

SRC 	= 	src/main.c	\
			src/color.c	\
			src/display.c	\
			src/game.c	\
			src/instance.c	\
			src/output.c	\
			src/tetriminos.c	\
			src/utils.c


OBJ 	= 	$(SRC:.c=.o)

NAME	= 	tetris

all:	$(NAME)

$(NAME): $(OBJ)
		 gcc -o $(NAME) $(OBJ) -lncurses

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all