/*
** EPITECH PROJECT, 2022
** my_put_nbr_long.c
** File description:
** put nbr for long int
*/

#include "../include/printf.h"

int my_put_nbr_long_long(long long n, printf_t *pr)
{
    if (n < 0) {
        my_putchar('-', pr);
        my_putstr("-2147483648", pr);
    }
    if (n > 9) {
        my_put_nbr(n / 10, pr);
        my_put_nbr(n % 10, pr);
    } else
        my_putchar(n + '0', pr);

    return (0);
}
