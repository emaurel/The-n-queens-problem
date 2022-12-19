/*
** EPITECH PROJECT, 2022
** The-n-queens-problem
** File description:
** is_str_int.c
*/

int is_str_int(char *str)
{
    for (int i = 0; str[i]; i++) {
        if (!('0' <= str[i] && str[i] <= '9'))
            return 0;
    }
    return 1;
}
