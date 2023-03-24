/*
** EPITECH PROJECT, 2022
** my_compute_power_rec.c
** File description:
** return a number powerd n times
*/

double my_compute_power_deci(double nb, int p)
{
    if (p == 0)
        return 1;
    if (p < 0)
        return 0;

    return nb * my_compute_power_deci(nb, p - 1);
}

long long my_compute_power_rec_long(long long nb, int p)
{
    if (p == 0) {
        return 1;
    }
    if (p < 0) {
        return 0;
    }
    return (nb * my_compute_power_rec_long(nb, p - 1));
}
