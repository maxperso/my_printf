/*
** EPITECH PROJECT, 2022
** handling_x_o.c
** File description:
** parsing for x and o
*/

#include "../include/printf.h"

char *handling_x(char *format, printf_t *pr, long long print)
{
    my_putnbr_base_long_long_len(print, "0123456789abcdef", pr);
    int len = pr->len_x_o;
    handling_zero(len, pr);
    if (pr->nbr >= 0 && pr->zero == 0 && pr->neg == 0)
        put_space(pr->nbr, len, pr);
    my_putnbr_base_long_long(print, "0123456789abcdef", pr);
    if (pr->neg == 1)
        handling_neg(len, pr);
    return (format);
}

char *handling_big_x(char *format, printf_t *pr, long long print)
{
    my_putnbr_base_long_long_len(print, "0123456789ABCDEF", pr);
    int len = pr->len_x_o;
    handling_zero(len, pr);
    if (pr->nbr >= 0 && pr->zero == 0 && pr->neg == 0)
        put_space(pr->nbr, len, pr);
    my_putnbr_base_long_long(print, "0123456789ABCDEF", pr);
    if (pr->neg == 1)
        handling_neg(len, pr);
    return (format);
}

char *handling_o(char *format, printf_t *pr, long long print)
{
    my_putnbr_base_long_long_len(print, "01234567", pr);
    int len = pr->len_x_o;
    handling_zero(len, pr);
    if (pr->nbr >= 0 && pr->zero == 0 && pr->neg == 0)
        put_space(pr->nbr, len, pr);
    my_putnbr_base_long_long(print, "01234567", pr);
    if (pr->neg == 1)
        handling_neg(len, pr);
    return (format);
}
