/*
** EPITECH PROJECT, 2022
** hold_string.c
** File description:
** hold string
*/

#include "../include/printf.h"

int len_string(char *format)
{
    int i = 0;

    for (; *format != '\0'; i++)
        format++;
    return (i);
}

int int_len(int value)
{
    int cpt = 0;
    while (value > 9) {
        cpt++;
        value = value / 10;
    }
    return (cpt);
}

int long_len(long long value)
{
    int cpt = 0;
    while (value > 9) {
        cpt++;
        value = value / 10;
    }
    return (cpt);
}

int long_len_u(unsigned long long value)
{
    int cpt = 0;
    while (value > 9) {
        cpt++;
        value = value / 10;
    }
    return (cpt);
}

void hold_string(char *format, printf_t *pr)
{
    int len = len_string(format);
    char *new_str = malloc(sizeof(char) * len + 1);
    int a = 0;

    for (int i = 0; i < len; i++) {
        new_str[a] = format[i];
        a++;
    }
    new_str[a] = '\0';
    pr->new_str = new_str;
}
