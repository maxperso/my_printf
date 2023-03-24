/*
** EPITECH PROJECT, 2022
** flag_n.c
** File description:
** flag n
*/

#include "../include/printf.h"

int flag_n(char *format, printf_t *pr)
{
    int cpt = 0;

    for (int i = 0; pr->new_str[i] != '%' && pr->new_str[i + 1] != 'n'; i++)
        cpt++;
    return (cpt);
}
