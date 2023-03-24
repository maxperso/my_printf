/*
** EPITECH PROJECT, 2022
** src/preflags_applications
** File description:
** applicating preflags
*/

#include "../include/printf.h"

void put_space(int nbr_space, int nbr_char, printf_t *pr)
{
    for (int i = nbr_char; i < nbr_space; i++)
        my_putchar(' ', pr);
}

void put_zero(int nbr_zero, int nbr_char, printf_t *pr)
{
    for (int i = nbr_char; i < nbr_zero; i++)
        my_putchar('0', pr);
}

void my_put_float_preflag(double nbr, printf_t *pr)
{
    for (long long temp = nbr; temp >= 10; pr->size++, temp /= 10);
    pr->size += pr->precis;
    if ((pr->ret == 0 && pr->pos != 0) || pr->ret != 0)
        pr->size++;
    if (pr->hasht == 0 && pr->precis == 0)
        pr->size--;
    if (pr->neg == 0 && pr->zero == 0)
        put_space(pr->nbr, ++pr->size, pr);
    if (pr->ret != 0)
        my_putchar('-', pr);
    if (pr->ret == 0 && pr->pos != 0)
        my_putchar('+', pr);
    if (pr->ret == 0 && pr->pos == 0 && pr->space == 1 && ((pr->nbr == 0 ||
        pr->zero != 0) || pr->neg != 0)) {
        my_putchar(' ', pr);
        pr->size++;
        }
    if (pr->neg == 0 && pr->zero != 0)
        put_zero(pr->nbr, ++pr->size, pr);
}

void my_put_after_flag(double nbr, printf_t *pr)
{
    int size = 1;
    int temp = nbr;

    if (pr->neg != 0)
        put_space(pr->nbr, ++pr->size, pr);
}
