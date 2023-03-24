/*
** EPITECH PROJECT, 2022
** flag_big_s
** File description:
** flag %S : print all non pritable character in \hexadecimal and all
*/

#include "../include/printf.h"

void little_hexa(char c, printf_t *pr)
{
    if (c < 64)
        my_putchar('0', pr);
    if (c < 8)
        my_putchar('0', pr);
}

int flag_big_s(char const *str, printf_t *pr)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < 32 || str[i] == 127) {
            my_putchar('\\', pr);
            little_hexa(str[i], pr);
            my_putnbr_base(str[i], "01234567", pr);
        } else {
        my_putchar(str[i], pr);
        }
    }
    return 0;
}
