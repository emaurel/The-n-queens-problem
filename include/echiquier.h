/*
** EPITECH PROJECT, 2022
** The-n-queens-problem
** File description:
** echiquier.h
*/

#ifndef ECHIQUIER_H_

    #define ECHIQUIER_H_
    #include <stdio.h>
    #include <unistd.h>
    #include <stdlib.h>

void swap(int *, int, int);
int is_str_int(char *str);
void print_matrice(int size, int *queen);
int get_queens(int n);

#endif