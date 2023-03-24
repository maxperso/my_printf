/*
** EPITECH PROJECT, 2022
** my_putchar
** File description:
** Display a my_putchar
*/

#include "../include/printf.h"

void my_putchar(char c, printf_t *pr)
{
    pr->retur++;
    write(1, &c, 1);
}
