/*
** EPITECH PROJECT, 2022
** handling_long.c
** File description:
** handling long
*/

#include "../include/printf.h"

char *handling_preflag(char *format, printf_t *pr, long long print)
{
    int len = long_len(print) + 1;
    if (pr->pos == 1 && print >= 0)
        len++;
    handling_zero(len, pr);
    if (pr->space == 1 && pr->nbr == -1 && pr->pos == 0)
        my_putchar(' ', pr);
    if (pr->space == 1 && pr->nbr >= 0 && pr->pos == 0 && pr->neg == 1)
        my_putchar(' ', pr);
    if (pr->nbr >= 0 && pr->zero == 0 && pr->neg == 0)
        put_space(pr->nbr, len, pr);
    my_put_nbr_long_long(print, pr);
    if (pr->neg == 1)
        handling_neg(len, pr);
    return (format);
}

char *handling_preflag_u(char *format, printf_t *pr, unsigned long long print)
{
    int len = long_len_u(print) + 1;
    if (pr->pos == 1 && print >= 0)
        len++;
    handling_zero(len, pr);
    if (pr->nbr >= 0 && pr->zero == 0 && pr->neg == 0)
        put_space(pr->nbr, len, pr);
    my_put_nbr_u(print, pr);
    if (pr->neg == 1)
        handling_neg(len, pr);
    return (format);
}

char *long_long_x_o(char *format, va_list arg, printf_t *pr)
{
    if (*format == 'x') {
        long long print = va_arg(arg, long long);
        handling_x(format, pr, print);
    }
    if (*format == 'X') {
        long long print = va_arg(arg, long long);
        handling_big_x(format, pr, print);
    }
    if (*format == 'o') {
        long long print = va_arg(arg, long long);
        handling_o(format, pr, print);
    }
    return (format);
}

char *handling_long_int(char *format, va_list arg, printf_t *pr)
{
    if (*format == 'd' || *format == 'i') {
        int print = va_arg(arg, int);
        handling_preflag(format, pr, print);
    }
    return (format);
}

char *handling_long(char *format, va_list arg, printf_t *pr)
{
    handling_long_int(format, arg, pr);
    if (*format == 'u') {
        unsigned long print = va_arg(arg, unsigned long);
        handling_preflag_u(format, pr, print);
    }
    if (*format == 'x') {
        long print = va_arg(arg, long);
        handling_x(format, pr, print);
    }
    if (*format == 'X') {
        long print = va_arg(arg, long);
        handling_big_x(format, pr, print);
    }
    if (*format == 'o') {
        long print = va_arg(arg, long);
        handling_o(format, pr, print);
    }
    return (format);
}
