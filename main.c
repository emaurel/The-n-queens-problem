/*
** EPITECH PROJECT, 2022
** main
** File description:
** to test
*/


void echiquier(int);
void get_queens(int);
int atoi(const char *string);

int main(int size, char *argv[])
{
    int i = atoi(argv[1]);
    get_queens(i);
}
