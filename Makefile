##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## makefile
##

SRC    =    $(wildcard src/*.c)

OBJ    =    $(SRC:.c=.o)

NAME    =    libmy.a

CFLAGS    =     -I./include

all:     $(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)
	rm -f *~

fclean:		clean
	rm -f $(NAME)

re:	fclean all

test_build:
	gcc src/*.c test/*.c -o unit_test --coverage -lcriterion -Wall

test_run: test_build
	rm -f *.gcno
	rm -f *.o
	./unit_test
	rm -f *.gcda
	rm unit_test
