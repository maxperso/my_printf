/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "../include/printf.h"
#include "stdio.h"

int main(int ac, char **av)
{
    int e = 123456789;
    unsigned int eu = 123456789;
    unsigned long lu = 123456789;
    unsigned long long ull = 123456789;
    char *str = " 015";
    char *test = "Hello World";
    // int min = -2147483648;

    /*
    /* E */
    printf("%e$\n", 76542.765645);
    my_printf("%e$\n", 76542.765645);

    /* F */
    printf("%f$\n", 76542.765645);
    my_printf("%f$\n", 76542.765645);
    printf("% 20f%\n", 129876.87654);
    printf("%20f%\n", 129876.87654);

    /* STRING */
    printf("%s$\n", test);
    my_printf("%s$\n", test);

    // /* FLAG D */
    // /* PLUS */
    printf("% +14d$\n", e);
    my_printf("% +14d$\n", e);
    printf("%+14d$\n", e);
    my_printf("%+14d$\n", e);


    /* PRES */
    printf("%14d$\n", e);
    my_printf("%14d$\n", e);
    printf("here: %.2d$\n", e);
    my_printf("here: %.2d$\n", e);


    /* ZERO */
    printf("% 014d$\n", e);
    my_printf("% 014d$\n", e);
    printf("%014d$\n", e);
    my_printf("%014d$\n", e);

    /* NEG */
    printf("%-15d%\n", e);
    my_printf("%-15d%\n", e);
    printf("%-015d%\n", e);
    my_printf("%-015d%\n", e);
    printf("%-   15d%\n", e);
    my_printf("%-   15d%\n", e);
    printf("% -10d%\n", e);
    my_printf("% -10d%\n", e);

    /* PRECIS */
    printf("%.52d$\n", e);
    my_printf("%.52d$\n", e);
    printf("%. 52d$\n", e);
    my_printf("%. 52d$\n", e);

    /* FLAG U */
    /* ZERO */
    printf("% 014u$\n", e);
    my_printf("% 014u$\n", e);
    printf("%014u$\n", e);
    my_printf("%014u$\n", e);
    printf("%14u$\n", e);
    my_printf("%14u$\n", e);

    /* NEG */
    printf("%-15u%\n", e);
    my_printf("%-15u%\n", e);
    printf("%-015u%\n", e);
    my_printf("%-015u%\n", e);
    printf("%- 15u%\n", e);
    my_printf("%- 15u%\n", e);

    /* PRECIS */
    printf("%.15u%\n", e);
    my_printf("%.15u%\n", e);

    /* FLAG L/LL/LU */
    printf("%  lx%\n", e);
    my_printf("%  lx%\n", e);
    printf("%+lX%\n", e);
    my_printf("%+lX%\n", e);
    printf("%+lo%\n", e);
    my_printf("%+lo%\n", e);
    printf("%llo%\n", e);
    my_printf("%llo%\n", e);

    /* D/I */
    printf("%ld%\n", e);
    my_printf("%ld%\n", e);
    printf("% ld%\n", e);
    my_printf("% ld%\n", e);
    printf("%20ld%\n", e);
    my_printf("%20ld%\n", e);
    printf("%-15ld%\n", e);
    my_printf("%-15ld%\n", e);
    printf("%020ld%\n", e);
    my_printf("%020ld%\n", e);
    printf("%-020ld%\n", e);
    my_printf("%-020ld%\n", e);

    /* LLD/I */
    printf("%013lld%\n", e);
    my_printf("%013lld%\n", e);
    printf("%-013lld%\n", e);
    my_printf("%-013lld%\n", e);

    /*  LU/LLU */
    printf("%lu%\n", lu);
    my_printf("%lu%\n", lu);
    printf("% lu%\n", lu);
    my_printf("% lu%\n", lu);
    printf("%20lu%\n", lu);
    my_printf("%20lu%\n", lu);
    printf("%-15llu%\n", ull);
    my_printf("%-15llu%\n", ull);
    printf("%020llu%\n", ull);
    my_printf("%020llu%\n", ull);
    printf("%-020llu%\n", ull);
    my_printf("%-020llu%\n", ull);

    /* Lx/X/LLx/X */
    printf("%lx%\n", e);
    my_printf("%lx%\n", e);
    printf("% lX%\n", e);
    my_printf("% lX%\n", e);
    printf("%20lx%\n", e);
    my_printf("%20lx%\n", e);
    printf("%20lX%\n", e);
    my_printf("%20lX%\n", e);
    printf("%-15llx%\n", e);
    my_printf("%-15llx%\n", e);
    printf("%020llx%\n", e);
    my_printf("%020llx%\n", e);
    printf("%-020llX%\n", e);
    my_printf("%-020llX%\n", e);

    /* lo/llo */
    printf("%lo%\n", e);
    my_printf("%lo%\n", e);
    printf("% lo%\n", e);
    my_printf("% lo%\n", e);
    printf("%20lo%\n", e);
    my_printf("%20lo%\n", e);
    printf("%20lo%\n", e);
    my_printf("%20lo%\n", e);
    printf("%-15llo%\n", e);
    my_printf("%-15llo%\n", e);
    printf("%020llo%\n", e);
    my_printf("%020llo%\n", e);
    printf("%-020llo%\n", e);
    my_printf("%-020llo%\n", e);

    /* FLAG %s */
    printf("%  s$\n", test);
    my_printf("%  s$\n", test);
    printf("%18s$\n", test);
    my_printf("%18s$\n", test);
    printf("% 26s$\n", test);
    my_printf("% 26s$\n", test);
    printf("%-15s$\n", test);
    my_printf("%-15s$\n", test);
    printf("%15s$\n", test);
    my_printf("%15s$\n", test);
    printf("%015 s$\n", test);
    my_printf("%015 s$\n", test);
    printf("%.5s$\n", test);
    my_printf("%.5s$\n", test);
    printf("%.20s$\n", test);
    my_printf("%.20s$\n", test);
    printf("%5.10s$\n", test);
    my_printf("%5.10s$\n", test);

    /* FLAG %c */
    printf("% c$\n", 'a');
    my_printf("% c$\n", 'a');
    printf("%   c$\n", 'a');
    my_printf("%   c$\n", 'a');
    printf("%-10c$\n", 'a');
    my_printf("%-10c$\n", 'a');
    printf("%10c$\n", 'a');
    my_printf("%10c$\n", 'a');
    printf("%   10c$\n", 'a');
    my_printf("%  10c$\n", 'a');
    printf("%23c$\n", 'a');
    my_printf("%23c$\n", 'a');

    /* FLAG %x/X */
    printf("%x%\n", e);
    my_printf("%x%\n", e);
    printf("% x%\n", e);
    my_printf("% x%\n", e);
    printf("%20x%\n", e);
    my_printf("%20x%\n", e);
    printf("%20X%\n", e);
    my_printf("%20X%\n", e);
    printf("%-15x%\n", e);
    my_printf("%-15x%\n", e);
    printf("%020x%\n", e);
    my_printf("%020x%\n", e);
    printf("%-020X%\n", e);
    my_printf("%-020X%\n", e);

    /* flag %o */
    printf("%o%\n", e);
    my_printf("%o%\n", e);
    printf("% o%\n", e);
    my_printf("% o%\n", e);
    printf("%20o%\n", e);
    my_printf("%20o%\n", e);
    printf("%20o%\n", e);
    my_printf("%20o%\n", e);
    printf("%-15o%\n", e);
    my_printf("%-15o%\n", e);
    printf("%020o%\n", e);
    my_printf("%020o%\n", e);
    printf("%-020o%\n", e);
    my_printf("%-020o%\n", e);

    /* RETURN */
    // return (printf("%014d$\n", e));
    // return (my_printf("%014d$\n", e));
    // return (printf("%-   15d%\n", e));
    // return (my_printf("%-   15d%\n", e));
}
