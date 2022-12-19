##
## EPITECH PROJECT, 2022
## The-n-queens-problem
## File description:
## Makefile
##

TARGET = n_queens_solutions
SRC = echiquier.c get_queens.c is_str_int.c

all :
	gcc -o $(TARGET) $(SRC) main.c

clean :

fclean :
	rm -rf $(TARGET)

re : fclean
	all