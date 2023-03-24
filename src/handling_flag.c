/*
** EPITECH PROJECT, 2022
** handling_flag.c
** File description:
** function to count space in string before a flag
*/

#include "../include/printf.h"

void handling_zero(int len, printf_t *pr)
{
    if (pr->precis >= 0 || pr->zero == 1 && pr->neg == 0) {
        if (pr->space == 1 && pr->its_u == 0) {
            len++;
            my_putchar(' ', pr);
        }
        my_put_zero(pr->nbr, len, pr);
        if (pr->precis >= 0)
            my_put_zero(pr->precis, len, pr);
    }
}

void handling_neg(int len, printf_t *pr)
{
    if (pr->space == 1 && pr->nbr >= 0 && pr->pos == 0 && pr->neg == 1 &&
    pr->its_u == 0)
        len++;
    put_space(pr->nbr, len, pr);
}

void my_put_str_i(char *str, int len, printf_t *pr)
{
    for (int i = 0; i < len; i++)
        my_putchar(str[i], pr);
}

void my_put_zero(int nbr_zero, int len, printf_t *pr)
{
    for (len; nbr_zero > len; len++)
        my_putchar('0', pr);
}
