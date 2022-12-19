/*
** EPITECH PROJECT, 2022
** main
** File description:
** to test
*/

#include <stdio.h>

void echiquier(int);
int get_queens(int);
int atoi(const char *string);
int is_str_int(char *str);

int main(int size, char **argv)
{
    if (size != 2) {
        printf("invalid number of arguments, type -h for help\n");
        return 84;
    }

    if (argv[1][0] == '-' && argv[1][1] == 'h')
        printf("A tool to visualize all solutions of the N queen problem\n\nUSAGE\n ./n_queens_solutions [INT]\n\nOPTION\n -h to show this message");

    if (!is_str_int(argv[1])) {
        printf("invalid arguments, type -h for help\n");
        return 84;
    }
    
    int i = atoi(argv[1]);
    int s = get_queens(i);
    printf("number of solution%s : %i\n", s >= 1 ? "s" : "", s);
    return 0;
}
