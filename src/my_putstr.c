/*
** EPITECH PROJECT, 2022
** my_putstr.c
** File description:
** print a string
*/

#include "../include/printf.h"

int my_putstr(char const *str, printf_t *pr)
{
    for (int i = 0; str[i] != '\0'; i++)
        my_putchar(str[i], pr);
    return (0);
}
