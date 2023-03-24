/*
** EPITECH PROJECT, 2022
** flag_b
** File description:
** %b write unsined number in binary
*/

#include "../include/printf.h"

void flag_b(unsigned int nbr, printf_t *pr)
{
    my_putnbr_base_unsigned(nbr, "01", pr);
}
