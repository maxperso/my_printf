/*
** EPITECH PROJECT, 2022
** flag_space.c
** File description:
** flag space
*/

#include "../include/printf.h"

char *flag_space(char *format, printf_t *pr)
{
    char *str;
    int len = 0;
    int a = 0;

    for (len; format[len] != '\0'; len++);
    str = malloc(sizeof(char) * len + 1);
    for (int i = 0; format[i] != '\0'; i++) {
        if (format[i] == ' ' && format[i + 1] == ' ')
            i++;
        else {
            str[a] = format[i];
            a++;
        }
    }
    return (str);
}
