/*
** EPITECH PROJECT, 2022
** my_put_nbr.c
** File description:
** display nbr given in parameter
*/

#include "../include/printf.h"

int my_put_nbr_u(unsigned long long n, printf_t *pr)
{
    if (n < 0) {
        my_putchar('-', pr);
        n = n * -1;
    }
    if (n > 9) {
        my_put_nbr(n / 10, pr);
        my_put_nbr(n % 10, pr);
    } else
        my_putchar(n + '0', pr);

    return (0);
}
