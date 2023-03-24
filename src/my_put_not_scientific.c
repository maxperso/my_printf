/*
** EPITECH PROJECT, 2022
** src/my_put_not_scientific
** File description:
** put the scientific notation
*/

#include "../include/printf.h"

void my_put_not_rescue(double nbr, char c, printf_t *pr)
{
    int i = 0;

    for (; !(nbr <= 10 && nbr >= -10); i++, nbr /= 10);
    flag_f_appli(nbr, pr->precis, pr);
    my_putchar(c, pr);
    my_putchar('+', pr);
    if (i < 10)
        my_putchar('0', pr);
    my_put_nbr(i, pr);
}

void my_put_not_scientific(double nbr, char c, printf_t *pr)
{
    int i = 0;

    if (nbr < 0)
        nbr *= -1;
    if (nbr < 1e-52) {
        my_put_not_rescue(nbr, c, pr);
        return;
    }
    if (nbr < 1 ) {
        for (; nbr < 1; i++, nbr *= 10);
        flag_f_appli(nbr, pr->precis, pr);
        my_putchar(c, pr);
        my_putchar('-', pr);
        if (i < 10)
            my_putchar('0', pr);
        my_put_nbr(i, pr);
    } else {
        my_put_not_rescue(nbr, c, pr);
    }
}
