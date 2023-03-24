/*
** EPITECH PROJECT, 2022
** preflag_application_helpers.c
** File description:
** preflag application helpers for flag g
*/

#include "../include/printf.h"

void count_flag_little(double nbr, printf_t *pr)
{
    long long temp;
    int i;

    for (; nbr < 1; nbr *= 10, pr->precis++);
    temp = nbr;
    nbr = nbr - temp;
    temp = nbr * my_compute_power_rec_long(10, pr->precis);
    i = my_compute_power_rec_long(10, pr->precis);
    for (; i != 1; i /= 10)
        if (temp % i == 0)
            pr->size--;
}

void count_flag_big(double nbr, printf_t *pr)
{
    int i;
    long long temp;
    int count = 0;

    for (long long tp = nbr; tp >= 10; count++, tp /= 10);
    pr->precis = pr->precis - count;
    temp = nbr;
    nbr = nbr - temp;
    i = my_compute_power_rec_long(10, pr->precis - count);
    temp = nbr * my_compute_power_rec_long(10, pr->precis - count);
    for (; i != 1; i /= 10)
        if (temp % i == 0)
            pr->size--;

}

void count_flag_expo(double nbr, printf_t *pr)
{
    long long temp;
    long long i = my_compute_power_rec_long(10, pr->precis);

    pr->size = 4;
    if (nbr < 1) {
        for (; nbr < 1; nbr *= 10);
            count_flag_little(nbr, pr);
    } else {
        for (; nbr >= 10; pr->size--, nbr /= 10);
            count_flag_little(nbr, pr);
    }
}

void size_of_flag_g(double nbr, printf_t *pr)
{
    long long temp = 0;
    int count = 0;

    if (nbr < 0) {
        nbr *= -1;
    }
    pr->size = 1;
    if (nbr < my_compute_power_rec_long(10, pr->precis + 1) &&
        nbr > my_compute_power_deci(0.1, 4)) {
            if (nbr < 1)
                count_flag_little(nbr, pr);
            else
                count_flag_big(nbr, pr);

    } else {
        count_flag_expo(nbr, pr);
    }
}
