/*
** EPITECH PROJECT, 2022
** flag_e
** File description:
** print in a scientific notation
*/

#include "../include/printf.h"

void flag_e(double nbr, printf_t *pr)
{
    double temp = nbr;

    pr->size = 5;
    if (nbr < 0) {
        temp *= -1;
        pr->ret = 1;
    }
    if (pr->precis < 0)
        pr->precis = 6;
    if (nbr < 1e-52)
        temp = 1.0;
    if (temp < 1)
        for (; temp < 1; temp *= 10);
    else
        for (; temp >= 10; temp /= 10);
    my_put_float_preflag(temp, pr);
    my_put_not_scientific(nbr, 'e', pr);
    my_put_after_flag(temp, pr);
    init_struct(pr);
}

void flag_big_e(double nbr, printf_t *pr)
{
    pr->size = 5;
    double temp = nbr;

    if (nbr < 0) {
        temp *= -1;
        pr->ret = 1;
    }
    if (pr->precis < 0)
        pr->precis = 6;
    if (nbr < 1e-52)
        temp = 1.0;
    if (temp < 1)
        for (; temp < 1; temp *= 10);
    for (; temp >= 10; temp /= 10);
    my_put_float_preflag(temp, pr);
    my_put_not_scientific(nbr, 'E', pr);
    my_put_after_flag(temp, pr);
    init_struct(pr);
}
