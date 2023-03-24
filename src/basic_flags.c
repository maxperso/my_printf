/*
** EPITECH PROJECT, 2022
** basic_flags.c
** File description:
** basic flag
*/

#include "../include/printf.h"

char *print_long_int(char *format, va_list arg, printf_t *pr)
{
    format++;
    format = handling_long(format, arg, pr);
    if (*format == 'l') {
        format++;
        if (*format == 'u') {
            unsigned long long print = va_arg(arg, unsigned long long);
            handling_preflag_u(format, pr, print);
        }
        if (*format == 'd' || *format == 'i') {
            long long print = va_arg(arg, long long);
            handling_preflag(format, pr, print);
        }
        format = long_long_x_o(format, arg, pr);
    }
    init_struct(pr);
    return (format);
}

char *print_big_s(char *format, va_list arg, printf_t *pr)
{
    char *print = va_arg(arg, char *);
    flag_big_s(print, pr);
    return (format);
}

char *print_str(char *format, va_list arg, printf_t *pr)
{
    char *print = va_arg(arg, char *);
    int len = my_strlen(print);
    if (pr->nbr >= 0 && pr->zero == 0 && pr->neg == 0)
        put_space(pr->nbr, len, pr);
    if (pr->precis >= 0 && pr->precis <= len)
        my_put_str_i(print, pr->precis, pr);
    if (pr->precis == -1 || pr->precis >= len)
        my_putstr(print, pr);
    if (pr->neg == 1)
        handling_neg(len, pr);
    init_struct(pr);
    return (format);
}

char *print_char(char *format, va_list arg, printf_t *pr)
{
    char print = va_arg(arg, int);
    int len = 1;
    if (pr->nbr >= 0 && pr->zero == 0 && pr->neg == 0)
        put_space(pr->nbr, len, pr);
    my_putchar(print, pr);
    if (pr->neg == 1)
        handling_neg(len, pr);
    init_struct(pr);
    return (format);
}

char *print_int(char *format, va_list arg, printf_t *pr)
{
    int print = va_arg(arg, int);
    int len = int_len(print) + 1;
    if (pr->pos == 1 && print >= 0)
        len++;
    handling_zero(len, pr);
    if (pr->space == 1 && pr->nbr == -1 && pr->pos == 0)
        my_putchar(' ', pr);
    if (pr->space == 1 && pr->nbr >= 0 && pr->pos == 0 && pr->neg == 1)
        my_putchar(' ', pr);
    if (pr->nbr >= 0 && pr->zero == 0 && pr->neg == 0)
        put_space(pr->nbr, len, pr);
    if (pr->pos == 1 && print >= 0)
        my_putchar('+', pr);
    my_put_nbr(print, pr);
    if (pr->neg == 1)
        handling_neg(len, pr);
    init_struct(pr);
    return (format);
}
