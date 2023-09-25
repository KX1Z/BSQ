##
## EPITECH PROJECT, 2022
## BSQ
## File description:
## Makefile
##

NAME	=	bsq

SRC	=	lib/*.c		\
		bsq.c    \

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-g3

all:	$(NAME)

$(NAME): $(OBJ)
	@gcc $(SRC) -o $(NAME) $(CFLAGS)

%.o: %.c
	@gcc $(CFLAGS) -c $< -o $(NAME)

clean:
	@rm -f ##
	@rm -f $(OBJ)

fclean:	clean
	@rm -f $(NAME)

re:	clean all