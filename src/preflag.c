/*
** EPITECH PROJECT, 2022
** src/preflag
** File description:
** everything about the parcer
*/

#include "../include/printf.h"

int parcer(printf_t *pr)
{
    if (pr->space != 0 || pr->hasht != 0 || pr->neg != 0 || pr->pos != 0 ||
        pr->zero != 0 || pr->nbr != -1 || pr->precis != -1)
        return 1;
    return 0;
}

char *my_getnbr_size(char *format, printf_t *pr)
{
    int temp;

    if (*format == '.') {
        format++;
        if (*format <= '9' && *format >= '0')
            pr->precis = my_getnbr(format);
        else {
            format--;
            pr->precis = 0;
        }
        temp = pr->precis;
    } else {
        pr->nbr = my_getnbr(format);
        temp = pr->nbr;
    }
    for (; temp >= 10; temp /= 10)
        format++;
    return format;
}

char *no_flag(char *format, printf_t *pr)
{
    my_putchar('%', pr);
    if (pr->hasht != 0)
        my_putchar('#', pr);
    if (pr->space != 0 && pr->pos == 0)
        my_putchar(' ', pr);
    if (pr->pos != 0)
        my_putchar('+', pr);
    if (pr->zero != 0 && pr->neg == 0)
        my_putchar('0', pr);
    if (pr->neg != 0)
        my_putchar('-', pr);
    if (pr->nbr > 0)
        my_put_nbr_long_long(pr->nbr, pr);
    if (pr->precis >= 0) {
        my_putchar('.', pr);
        my_put_nbr_long_long(pr->precis, pr);
    }
    init_struct(pr);
    my_putchar(*format, pr);
}

char *cases(char *format, printf_t *pr)
{
    if ((*format <= '9' && *format >= '1') || *format == '.') {
        format = my_getnbr_size(format, pr);
        return format;
    }
    if (pr->nbr != -1 || pr->precis != -1) {
        no_flag(format, pr);
        return format;
    }
    switch (*format) {
        case ' ': pr->space = 1; break;
        case '#': pr->hasht = 1; break;
        case '+': pr->pos = 1; break;
        case '-': pr->neg = 1; break;
        case '0': pr->zero = 1; break;
        default: no_flag(format, pr); break;
    }
    return (format);
}

char *preflag(char *format, va_list arg, printf_t *pr)
{
    if (*format == '*') {
        if (pr->nbr == -1 && pr->precis == -1) {
            pr->nbr = va_arg(arg, long long);
            return (format);
        }
    }
    if (*format == '.' && *(format + 1) == '*') {
        if (pr->precis == -1) {
            pr->precis = va_arg(arg, long long);
            format++;
            return (format);
        }
    }
    format = cases(format, pr);
    return (format);
}
