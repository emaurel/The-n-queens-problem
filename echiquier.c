/*
** EPITECH PROJECT, 2022
** echiquier
** File description:
** pour observer les dames
*/

#include <stdio.h>

void print_line(int size, int *queen, int pos)
{
    for (int i = 0; i < size; i++) {
        if (queen[i] == pos) {
            printf(" 1 ");
        } else
            printf(" 0 ");
    }
    printf("\n");
}

void print_matrice(int size, int *queen)
{
    for (int pos = 0; pos < size; pos++) {
        print_line(size, queen, pos);
    }
    printf("\n");
    
}





void echiquier(int size, int *queen)
{
    
    print_matrice(size, queen);    

    
}
