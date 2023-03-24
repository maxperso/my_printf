/*
** EPITECH PROJECT, 2022
** src/the_other_basic_flags
** File description:
** other basic flags
*/

#include "../include/printf.h"

char *print_big_g(char *format, va_list arg, printf_t *pr)
{
    double k = va_arg(arg, double);
    double temp = k;

    if (k < 0) {
        temp *= -1;
        pr->ret = 1;
    }
    if (k < 1e-52)
        temp = 1.0;
    flag_g(k, 'P', pr);
    return (format);
}

char *print_g(char *format, va_list arg, printf_t *pr)
{
    double k = va_arg(arg, double);
    double temp = k;
    int precis = pr->precis;
    int pr_temp;

    if (k < 0) {
        temp *= -1;
        pr->ret = 1;
    }
    if (k < 1e-52)
        temp = 1.0;
    pr->size = 1;
    flag_g(k, 'p', pr);
    return (format);
}

char *print_usigned(char *format, va_list arg, printf_t *pr)
{
    pr->its_u = 1;
    int print = va_arg(arg, int);
    int len = int_len(print) + 1;
    handling_zero(len, pr);
    if (pr->nbr >= 0 && pr->zero == 0 && pr->neg == 0)
        put_space(pr->nbr, len, pr);
    my_put_nbr(print, pr);
    if (pr->neg == 1)
        handling_neg(len, pr);
    init_struct(pr);
    return (format);
}

char *print_float(char *format, va_list arg, printf_t *pr)
{
    double k = va_arg(arg, double);

    pr->size = 1;
    if (pr->precis < 0)
        pr->precis = 6;
    flag_f(k, pr);
    return (format);
}

char *print_hexa_capital(char *format, va_list arg, printf_t *pr)
{
    int print = va_arg(arg, int);
    handling_big_x(format, pr, print);
    init_struct(pr);
    return (format);
}
