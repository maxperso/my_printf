/*
** EPITECH PROJECT, 2022
** src/not_complicate_fags
** File description:
** second page of basic flags
*/

#include "../include/printf.h"

char *print_percent(char *format, va_list arg, printf_t *pr)
{
    my_putchar('%', pr);
    return (format);
}

char *print_short(char *format, va_list arg, printf_t *pr)
{
    format++;
    if (*format == 'd' || *format == 'i') {
        short print = va_arg(arg, int);
        my_put_nbr_short(print, pr);
    }
    return (format);
}

char *print_hexa(char *format, va_list arg, printf_t *pr)
{
    int print = va_arg(arg, int);
    handling_x(format, pr, print);
    init_struct(pr);
    return (format);
}

char *print_octal(char *format, va_list arg, printf_t *pr)
{
    int print = va_arg(arg, int);
    handling_o(format, pr, print);
    init_struct(pr);
    return (format);
}

char *print_unsigned_binary(char *format, va_list arg, printf_t *pr)
{
    flag_b(va_arg(arg, unsigned int), pr);
    return (format);
}
