/*
** EPITECH PROJECT, 2022
** init_struct.c
** File description:
** init struct.c
*/

#include "../include/printf.h"

void init_struct(printf_t *pr)
{
    pr->nbr = -1;
    pr->precis = -1;
    pr->space = 0;
    pr->hasht = 0;
    pr->neg = 0;
    pr->pos = 0;
    pr->ret = 0;
    pr->pt_star = 0;
    pr->verif = 0;
    pr->empty = 0;
    pr->point = 0;
    pr->zero = 0;
    pr->nbr_space = 0;
    pr->its_u = 0;
    pr->len_x_o = 0;
}
