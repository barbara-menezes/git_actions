##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile
##

##Flags created to run the programs and make it less verbose
CC		=	gcc
CPPFLAGS	=	-I include

##All the names of the files that will be created
NAME		=	libmy.a
NAME_MY		=	my.h
UT_NAME		=	unit_tests

##All the resource files that will be use on the program
SRC		=	./src/my_printf.c \
			./src/my_special_cases.c \
			./src/my_putchar.c \
			./src/my_strcpy.c \
			./src/error_handler.c \
			./src/my_n.c \
			./src/my_all_put_nbr.c \
			./src/my_num_dig.c \
			./src/my_putstr.c \
			./src/my_all_octals.c \
			./src/my_all_hexa.c \
			./src/my_u_flag.c \
			./src/space.c \

UT_SRC		=	./tests/test.c \

##Transform all .c files the listed in SRC to .o file
OBJ		=	$(SRC:.c=.o)

all:$(NAME)

$(NAME):$(OBJ)
	ar rc $(NAME) $(OBJ)

tests_run:
	$(CC) -o $(UT_NAME) $(CPPFLAGS) --coverage $(SRC) $(UT_SRC) -lcriterion
	./$(UT_NAME)
	gcovr --html-details coverage.html
	cd build; gcovr -r .
clean:
	$(RM) $(OBJ)
	$(RM) *.gcda
	$(RM) *.gcno
	$(RM) *.html
	$(RM) *.css
	$(RM) $(NAME)

fclean: clean
	$(RM) $(UT_NAME)

re: fclean all
