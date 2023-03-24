/*
** EPITECH PROJECT, 2022
** printf.h
** File description:
** PRINTF_H_
*/

#ifndef PRINTF_H_
    #define PRINTF_H_

    /* STRUCT */
    typedef struct printf {
        long long nbr;
        long long precis;
        int space;
        int hasht;
        int neg;
        int pos;
        int zero;
        int ret;
        int size;
        int pt_star;
        int verif;
        int empty;
        int point;
        int retur;
        int nbr_space;
        int its_u;
        int len_x_o;
        char *new_str;
    } printf_t;

    /* INCLUDE */
    #include <stdarg.h>
    #include <unistd.h>
    #include <stdlib.h>
    #include <limits.h>

    /* LIB */
    int my_strlen(char const *str);
    void my_putchar(char c, printf_t *pr);
    int my_putnbr_base(int nbr, char const *base, printf_t *pr);
    void my_base_lower(int nbr, int size, char const *base, printf_t *pr);
    int my_put_nbr(long long n, printf_t *pr);
    int my_putstr(char const *str, printf_t *pr);
    int my_put_nbr_long_long(long long n, printf_t *pr);
    int my_put_nbr_short(short n, printf_t *pr);
    int my_put_nbr_u(unsigned long long n, printf_t *pr);
    void my_base_lower_unsigned(int unsigned nbr, int size, char const *base
    , printf_t *pr);
    int my_putnbr_base_unsigned(unsigned int nbr, char const *base,
    printf_t *pr);
    int my_putnbr_base_long_long(long long nbr, char const *base,
    printf_t *pr);
    int my_putnbr_base_u_long_long(unsigned long long nbr, char const *base,
    printf_t *pr);
    void my_base_lower_long_long(long long nbr, int size, char const *base,
    printf_t *pr);
    void my_put_not_scientific(double nbr, char c, printf_t *pr);
    int my_getnbr(char const *str);
    long long my_compute_power_rec_long(long long nbr, int p);
    double my_compute_power_deci(double nbr, int p);
    char *my_strcat(char *str, char *arr);
    int int_len(int value);
    int long_len(long long value);
    int long_len_u(unsigned long long value);
    void my_put_str_i(char *str, int len, printf_t *pr);

    /* MAIN FUCTION */
    int my_printf(char *format, ...);
    char *print_int(char *format, va_list arg, printf_t *pr);
    char *print_char(char *format, va_list arg, printf_t *pr);
    char *print_str(char *format, va_list arg, printf_t *pr);
    char *print_big_s(char *format, va_list arg, printf_t *pr);
    char *print_long_int(char *format, va_list arg, printf_t *pr);
    char *print_short(char *format, va_list arg, printf_t *pr);
    char *print_percent(char *format, va_list arg, printf_t *pr);
    char *print_octal(char *format, va_list arg, printf_t *pr);
    char *print_hexa(char *format, va_list arg, printf_t *pr);
    char *print_unsigned_binary(char *format, va_list arg, printf_t *pr);
    char *print_hexa_capital(char *format, va_list arg, printf_t *pr);
    char *print_float(char *format, va_list arg, printf_t *pr);
    char *print_usigned(char *format, va_list arg, printf_t *pr);
    char *print_g(char *format, va_list arg, printf_t *pr);
    char *print_big_g(char *format, va_list arg, printf_t *pr);
    char *print_pointers(char *format, va_list arg, printf_t *pr);
    char *print_scientific(char *format, va_list arg, printf_t *pr);
    char *print_scientific_big(char *format, va_list arg, printf_t *pr);
    char *print_hashtag(char *format, va_list arg, printf_t *pr);
    char *print_float_hexa(char *format, va_list arg, printf_t *pr);
    char *print_float_hexa_big(char *format, va_list arg, printf_t *pr);
    char *print_plus(char *format, va_list arg, printf_t *pr);
    char *error_handling(char *format, va_list arg, printf_t *pr);
    int flag_big_s(char const *str, printf_t *pr);
    void flag_big_x(int nbr, printf_t *pr);
    void flag_b(unsigned int nbr, printf_t *pr);
    void flag_a(double nbr, char c, printf_t *pr);
    void flag_o(int nbr, printf_t *pr);
    void flag_x(int nbr, printf_t *pr);
    void flag_f_appli(double nbr_dbl, int precis, printf_t *pr);
    void flag_p(long long element, printf_t *pr);
    void flag_big_e(double nbr, printf_t *pr);
    void flag_g(double nbr_dbl, char c, printf_t *pr);
    void flag_e(double nbr, printf_t *pr);
    char *flag_hashtag(char *format, va_list arg, printf_t *pr);
    void init_struct(printf_t *pr);
    void hold_string(char *format, printf_t *pr);
    char *preflag(char *format, va_list arg, printf_t *pr);
    void check_empty(char *format, printf_t *pr);
    void find_size(double nbr_dbl, printf_t *pr);
    void modified_scient(double nbr, char c, printf_t *pr);
    void modified_float_f(double nbr_dbl, int precis, printf_t *pr);
    void point_float_f(int precis, int size, long long nbr, printf_t *pr);
    char *flag_space(char *format, printf_t *pr);
    void put_space(int nbr_space, int nbr_char, printf_t *pr);
    void my_put_float_preflag(double nbr, printf_t *pr);
    void my_put_nbr_preflag(int size, printf_t *pr);
    int parcer(printf_t *pr);
    char *print_n(char *format, va_list arg, printf_t *pr);
    int flag_n(char *format, printf_t *pr);
    void my_put_after_flag(double nbr, printf_t *pr);
    void my_put_zero(int nbr_zero, int len, printf_t *pr);
    void handling_zero(int len, printf_t *pr);
    void handling_neg(int len, printf_t *pr);
    char *handling_long(char *format, va_list arg, printf_t *pr);
    char *long_long_x_o(char *format, va_list arg, printf_t *pr);
    void my_put_float_preflag_g(double nbr, printf_t *pr);
    char *handling_preflag(char *format, printf_t *pr, long long print);
    char *handling_preflag_u(char *format, printf_t *pr,
    unsigned long long print);
    int my_putnbr_base_long_long_len(long long nbr, char const *base,
    printf_t *pr);
    char *handling_x(char *format, printf_t *pr, long long print);
    char *handling_big_x(char *format, printf_t *pr, long long print);
    char *handling_o(char *format, printf_t *pr, long long print);
    void size_of_flag_g(double nbr, printf_t *pr);
    void flag_f(double nbr_dbl, printf_t *pr);
    void redirecting(double nbr, printf_t *pr);

#endif /* !PRINTF_H_ */
