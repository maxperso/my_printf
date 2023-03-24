/*
** EPITECH PROJECT, 2022
** src/flag_g
** File description:
** creat the flag g who is a kind of mix between %f and %e
*/

#include "../include/printf.h"

void point_float_f(int precis, int size, long long nbr, printf_t *pr)
{
    int i = 1;

    my_putchar('.', pr);
    for (; i < precis - size && (nbr % my_compute_power_rec_long(10, precis -
        size - i)); i++)
        my_put_nbr_long_long((nbr /
        my_compute_power_rec_long(10, precis - size - i)) % 10, pr);
    if ((nbr / my_compute_power_rec_long(10, precis - size - i)) % 10)
        my_put_nbr_long_long((nbr /
        my_compute_power_rec_long(10, precis - size - i)) % 10, pr);
}

void delete_zero_expo(double nbr, char c, printf_t *pr)
{
    long long nbr_long = 0;
    double nbr_temp = nbr;

    if (nbr_temp < 0)
        nbr_temp *= -1;
    if (nbr_temp < 1)
        for (; nbr_temp < 1; nbr_temp *= 10);
    for (; nbr_temp >= 10; nbr_temp /= 10);
    nbr_temp -= nbr_long;
    nbr_long = nbr_temp * my_compute_power_rec_long(10, pr->precis);
    for (; nbr_long > 0 && nbr_long % 10 == 0; nbr_long /= 10, pr->precis--);
    if (pr->precis < 0)
        pr->precis = 0;
    if (c == 'p')
        flag_e(nbr, pr);
    else
        flag_big_e(nbr, pr);
}

void delete_zero(double nbr, printf_t *pr)
{
    long long nbr_long = nbr;
    double nbr_temp = nbr;

    if (nbr_temp < 0)
        nbr_temp *= -1;
    if (nbr_temp < 1e-52)
        nbr_temp = 1;
    nbr_temp -= nbr_long;
    nbr_long = nbr_temp * my_compute_power_rec_long(10, pr->precis);
    for (; nbr_long > 0 && nbr_long % 10 == 0; nbr_long /= 10, pr->precis--);
    if (pr->precis < 0)
        pr->precis = 0;
    flag_f(nbr, pr);
}

void little_size_no_hasht(double nbr, char c, double pr_temp, printf_t *pr)
{
    double nbr_temp = nbr;

    if (pr->precis == 0)
        pr->precis = 1;
    if (nbr_temp < 0)
        nbr_temp *= -1;
    if (nbr_temp < 1e-52) {
        delete_zero(nbr, pr);
        return;
    }
    for (; nbr_temp < 0.1; pr->precis++, nbr_temp *= 10);
    if (pr->precis < pr_temp + 4 ) {
        delete_zero(nbr, pr);
    } else {
        pr->precis = pr_temp - 1;
        delete_zero_expo(nbr, c, pr);
    }
}

void flag_g(double nbr, char c, printf_t *pr)
{
    int pr_temp = pr->precis;
    double nbr_temp = nbr;

    if (pr->hasht != 0) {
        redirecting(nbr, pr);
        return;
    }
    if (nbr_temp < 0)
        nbr_temp *= (-1);
    if (nbr_temp > 1) {
        for (; nbr_temp >= 1; pr->precis--, nbr_temp /= 10);
        if (pr->precis >= 0) {
            delete_zero(nbr, pr);
        } else {
            pr->precis = pr_temp - 1;
            delete_zero_expo(nbr, c, pr);
        }
    } else
        little_size_no_hasht(nbr, c, pr_temp, pr);
}
