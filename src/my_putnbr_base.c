/*
** EPITECH PROJECT, 2022
** my_putnbr_base
** File description:
** write a number in any base
*/

#include "../include/printf.h"

void my_base_lower(int nbr, int size, char const *base, printf_t *pr)
{
    int place = nbr % size;
    int i = 0;

    if (nbr < 0) {
        my_putchar('-', pr);
        my_base_lower(-nbr, size, base, pr);
        return;
    }
    if (nbr >= size)
        my_base_lower(nbr / size, size, base, pr);
    for (; i < place; i++);
    my_putchar(base[i], pr);
}

int my_putnbr_base(int nbr, char const *base, printf_t *pr)
{
    int size = my_strlen(base);
    long big_size;

    if (nbr == -2147483648) {
        my_putchar('-', pr);
        my_base_lower((-1) * (nbr / size), size, base, pr);
        my_base_lower((-1) * (nbr % size), size, base, pr);
    } else {
        my_base_lower(nbr, size, base, pr);
    }
    return (0);
}
