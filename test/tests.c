/*
** EPITECH PROJECT, 2022
** test criterion
** File description:
** tests
*/

#include <criterion/criterion.h>
#include <stdio.h>
#include <criterion/redirect.h>
#include "../include/printf.h"

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(my_printf, permier_test) {
    redirect_all_std();
    my_printf("est");
    cr_assert_stdout_eq_str("est");
}

Test(my_printf, f1) {
    double a = 1234.56745678987;

    redirect_all_std();
    my_printf("%f", a);
    cr_assert_stdout_eq_str("1234.567457");
}

Test(my_printf, f2) {
    double a = 0.0;

    redirect_all_std();
    my_printf("%f", a);
    cr_assert_stdout_eq_str("0.000000");
}

Test(my_printf, f3) {
    double a = 0.0;

    redirect_all_std();
    my_printf("%g", a);
    cr_assert_stdout_eq_str("0");
}
