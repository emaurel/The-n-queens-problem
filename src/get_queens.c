/*
** EPITECH PROJECT, 2022
** count_valid_queens_placements
** File description:
** task08
*/

#include "echiquier.h"

void mid(int *collumn, int i, int j, int *c)
{
    if (i != j)
        *c *= (collumn[i] - i != collumn[j] - j
            && collumn[i] + i != collumn[j] + j);
}

int check_diag(int *collumn, int n)
{
    int c = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            mid(collumn, i, j, &c);
        }
    }
    return c;
}

void permutation(int *collumn,int l, int n, int *compteur)
{
    int c = *compteur;

    if (l == n) {
        *compteur += check_diag(collumn, n);
        if (c != *compteur) {
            print_matrice(n, collumn);
            c = *compteur;
        }
        return;
    }
    for (int i = l; i < n; i++) {
        swap(collumn, i, l);
        permutation(collumn, l + 1, n, compteur);
        swap(collumn, i, l);
    }
}

void swap(int *collumn, int a, int b)
{
    int c = collumn[a];
    collumn[a] = collumn[b];
    collumn[b] = c;
}

int get_queens(int n)
{
    int queens[n];
    int c = 0;
    for (int i = 0; i < n; i++) {
        queens[i] = i;
    }
    permutation(queens, 0, n, &c);
    return c;
}
