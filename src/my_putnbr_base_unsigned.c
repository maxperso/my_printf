/*
** EPITECH PROJECT, 2022
** my_putnbr_base
** File description:
** write a number in any base
*/

#include "../include/printf.h"

void my_base_lower_unsigned(int unsigned nbr, int size, char const *base,
printf_t *pr)
{
    int place = nbr % size;
    int i = 0;

    if (nbr >= size)
        my_base_lower_unsigned(nbr / size, size, base, pr);
    for (; i < place; i++);
    my_putchar(base[i], pr);
}

int my_putnbr_base_unsigned(unsigned int nbr, char const *base, printf_t *pr)
{
    int size = my_strlen(base);
    long big_size;
    my_base_lower_unsigned(nbr, size, base, pr);
    return (0);
}
