/*
** EPITECH PROJECT, 2022
** src/flag_f
** File description:
** print float
*/

#include "../include/printf.h"

void redirecting_coding_style(double nbr, int pr_temp, printf_t *pr)
{
    double nbr_temp = nbr;

    if (pr->precis == 0) {
        pr->precis = 1;
        pr_temp = 1;
    }
    if (nbr_temp < 0)
        nbr_temp *= -1;
    for (; nbr_temp < 0.1; pr->precis++, nbr_temp *= 10);
    if (pr->precis < pr_temp + 4 ) {
        flag_f(nbr, pr);
    } else {
        pr->precis = pr_temp - 1;
        flag_e(nbr, pr);
    }
}

void redirecting(double nbr, printf_t *pr)
{
    int pr_temp = pr->precis;
    double nbr_temp = nbr;
    if (nbr_temp < 0)
        nbr_temp *= (-1);
    if (nbr_temp < 1e-52) {
        pr->precis--;
        flag_f(nbr, pr);
        return;
    }
    if (nbr_temp > 1) {
        for (; nbr_temp >= 1; pr->precis--, nbr_temp /= 10);
        if (pr->precis >= 0) {
            flag_f(nbr, pr);
        } else {
            pr->precis = pr_temp - 1;
            flag_e(nbr, pr);
        }
    } else
        redirecting_coding_style(nbr, pr_temp, pr);
}

void float_point(long long nbr, int precis, printf_t *pr)
{
    my_putchar('.', pr);
    for (int i = 1; i < precis; i++)
        my_put_nbr_long_long((nbr /
        my_compute_power_rec_long(10, precis - i)) % 10, pr);
    if (pr->precis != 0)
        my_put_nbr_long_long(nbr % 10, pr);
}

void flag_f_appli(double nbr_dbl, int precis, printf_t *pr)
{
    long long decimal;
    long long nbr;

    if (nbr_dbl < 0)
        nbr_dbl *= (-1);
    nbr = nbr_dbl * my_compute_power_rec_long(10, precis);
    if ((nbr_dbl * my_compute_power_rec_long(10, precis)) - nbr > 0.5)
        nbr ++;
    decimal = nbr / my_compute_power_rec_long(10, precis);
    my_put_nbr_long_long(decimal, pr);
    if (pr->precis == 0 && pr->hasht == 0)
        return;
    float_point(nbr, precis, pr);
}

void flag_f(double nbr_dbl, printf_t *pr)
{
    double temp = nbr_dbl;

    if (temp < 0) {
        temp *= -1;
        pr->ret = 1;
    }
    if (temp < 1e-52)
        temp = 1.0;
    my_put_float_preflag(temp, pr);
    flag_f_appli(nbr_dbl, pr->precis, pr);
    my_put_after_flag(temp, pr);
    init_struct(pr);
}
