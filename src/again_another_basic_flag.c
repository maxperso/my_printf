/*
** EPITECH PROJECT, 2022
** src/again_another_basic_flag
** File description:
** another page of flags
*/

#include "../include/printf.h"

char *print_hashtag(char *format, va_list arg, printf_t *pr)
{
    format = flag_hashtag(format, arg, pr);
    return (format);
}

char *print_pointers(char *format, va_list arg, printf_t *pr)
{
    long long arg_long_long = va_arg(arg, long long);
    flag_p(arg_long_long, pr);
    return (format);
}

char *print_scientific_big(char *format, va_list arg, printf_t *pr)
{
    flag_big_e(va_arg(arg, double), pr);
    return (format);
}

char *print_scientific(char *format, va_list arg, printf_t *pr)
{
    flag_e(va_arg(arg, double), pr);
    return (format);
}

char *print_plus(char *format, va_list arg, printf_t *pr)
{
    return (format);
}
