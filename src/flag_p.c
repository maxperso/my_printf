/*
** EPITECH PROJECT, 2022
** src/flag_p
** File description:
** write the adress
*/

#include "../include/printf.h"

void flag_p(long long element, printf_t *pr)
{
    my_putstr("0x", pr);
    my_putnbr_base_long_long(element, "0123456789abcdef", pr);
}
