/*
** EPITECH PROJECT, 2022
** my_strlen.c
** File description:
** founction who count the number of letters
*/

#include "../include/printf.h"

int my_strlen(char const *str)
{
    int i = 0;

    for (; str[i] != '\0'; i++);
    return (i);
}
