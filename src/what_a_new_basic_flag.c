/*
** EPITECH PROJECT, 2022
** src/what_a_new_basic_flag
** File description:
** another page of basic flags
*/

#include "../include/printf.h"

char *print_float_hexa_big(char *format, va_list arg, printf_t *pr)
{
    flag_a(va_arg(arg, double), 'A', pr);
    return (format);
}

char *print_float_hexa(char *format, va_list arg, printf_t *pr)
{
    flag_a(va_arg(arg, double), 'a', pr);
    return (format);
}

char *print_n(char *format, va_list arg, printf_t *pr)
{
    int cpt = flag_n(format, pr);
    int *te = va_arg(arg, int *);
    cpt = *te;
    return (format);
}
