/*
** EPITECH PROJECT, 2022
** src/flag_hashtag
** File description:
** Specifide the type of writing
*/

#include "../include/printf.h"

char *flag_hashtag(char *format, va_list arg, printf_t *pr)
{
    int i = 0;

    for (; !((format[i] <= 'z' && format[i] >= 'a') ||
        (format[i] <= 'Z' && format[i] >= 'A')) && format[i] != '\0'; i++);
    switch (format[i]) {
        case 'x':
            my_putstr("0x", pr);
            format++; break;
        case 'X':
            my_putstr("0x", pr);
            format++; break;
        case 'o':
            my_putchar('0', pr);
            format++; break;
        default:
    }
    return format;
}
