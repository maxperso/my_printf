/*
** EPITECH PROJECT, 2022
** src/flag_a
** File description:
** find nbr in a scietific form of base 2 and then transform it in
*/

#include "../include/printf.h"

union u_flag_a {
    double db_nbr;
    unsigned long long ll_nbr;
};

void my_puthexa(long long nbr, char c, int p, printf_t *pr)
{
    int size_letter = 0;

    if (c == 'A')
        size_letter = -32;
    my_put_nbr(0, pr);
    my_putchar('x' + size_letter, pr);
    my_putstr("1.", pr);
    if (c == 'A')
        my_putnbr_base_long_long(nbr, "0123456789ABCDEF", pr);
    else
        my_putnbr_base_long_long(nbr, "0123456789abcdef", pr);
    my_putchar('p' + size_letter, pr);
    if (p >= 0)
        my_putchar('+', pr);
    my_put_nbr(p, pr);
}

void flag_a(double nbr, char c, printf_t *pr)
{
    union u_flag_a *u_nbr = malloc(sizeof(union u_flag_a));
    int i = 0;

    if (nbr < 0) {
        my_putchar('-', pr);
        nbr *= (-1);
    }
    if (nbr > 1)
        for (; nbr >= 2; i++, nbr /= 2);
    else {
        for (; nbr < 1; i++, nbr *= 2);
        i = -i;
    }
    u_nbr->db_nbr = nbr;
    u_nbr->ll_nbr <<= 12;
    u_nbr->ll_nbr >>= 12;
    my_puthexa(u_nbr->ll_nbr, c, i, pr);
    free(u_nbr);
}
