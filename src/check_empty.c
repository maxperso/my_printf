/*
** EPITECH PROJECT, 2022
** check_empty.c
** File description:
** check flag
*/

#include "../include/printf.h"

void check_empty3(char *format, printf_t *pr)
{
    switch (format[pr->verif]) {
        case 'g': pr->empty = 1; break;
        case 'G': pr->empty = 1; break;
        case 'p': pr->empty = 1; break;
        case 'e': pr->empty = 1; break;
        case 'E': pr->empty = 1; break;
        case 'a': pr->empty = 1; break;
        case 'n': pr->empty = 1; break;
        default: pr->empty = 2; break;
    }
}

void check_empty2(char *format, printf_t *pr)
{
    switch (format[pr->verif]) {
        case 'o': pr->empty = 1; break;
        case 'h': pr->empty = 1; break;
        case '%': pr->empty = 1; break;
        case 'b': pr->empty = 1; break;
        case 'f': pr->empty = 1; break;
        case 'X': pr->empty = 1; break;
        case 'u': pr->empty = 1; break;
        default: check_empty3(format, pr); break;
    }
}

void check_empty(char *format, printf_t *pr)
{
    switch (format[pr->verif]) {
        case 'i':
        case 'd': pr->empty = 1; break;
        case 'l': pr->empty = 1; break;
        case 'c': pr->empty = 1; break;
        case 's': pr->empty = 1; break;
        case 'S': pr->empty = 1; break;
        case 'x': pr->empty = 1; break;
        default: check_empty2(format, pr); break;
    }
}
