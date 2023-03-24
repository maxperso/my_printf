/*
** EPITECH PROJECT, 2022
** src/flag_change_base
** File description:
** change an int in octal or hexadecimal
*/

#include "../include/printf.h"

void flag_o(int nbr, printf_t *pr)
{
    my_putnbr_base(nbr, "01234567", pr);
}

void flag_x(int nbr, printf_t *pr)
{
    my_putnbr_base(nbr, "0123456789abcdef", pr);
}

void flag_big_x(int nbr, printf_t *pr)
{
    my_putnbr_base(nbr, "0123456789ABCDEF", pr);
}
