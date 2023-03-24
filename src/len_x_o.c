/*
** EPITECH PROJECT, 2022
** len_x_o.c
** File description:
** len x and len o
*/

#include "../include/printf.h"

void my_base_lower_long_long_len(long long nbr, int size, char const *base,
printf_t *pr)
{
    int place = nbr % size;
    int i = 0;

    if (nbr < 0) {
        pr->len_x_o++;
        my_base_lower_long_long_len(-nbr, size, base, pr);
        return;
    }
    if (nbr >= size)
        my_base_lower_long_long_len(nbr / size, size, base, pr);
    for (; i < place; i++);
        pr->len_x_o++;
}

int my_putnbr_base_long_long_len(long long nbr, char const *base, printf_t *pr)
{
    int size = my_strlen(base);

    if (nbr == -2147483648) {
        pr->len_x_o;
        my_base_lower_long_long_len((-1) * (nbr / size), size, base, pr);
        my_base_lower_long_long_len((-1) * (nbr % size), size, base, pr);
    } else {
        my_base_lower_long_long_len(nbr, size, base, pr);
    }
    return (0);
}
