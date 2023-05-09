/*
** EPITECH PROJECT, 2022
** echiquier
** File description:
** pour observer les dames
*/

#include "echiquier.h"

void print_line(int size, int *queen, int pos)
{
    for (int i = 0; i < size; i++) {
        if (queen[i] == pos) {
            write(1, " 1 ", 3);
        } else
            write(1, " 0 ", 3);
    }
    write(1, "\n", 1);
}

void print_matrice(int size, int *queen)
{
    for (int pos = 0; pos < size; pos++) {
        print_line(size, queen, pos);
    }
    printf("\n");
    
}