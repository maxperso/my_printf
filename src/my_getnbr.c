/*
** EPITECH PROJECT, 2022
** my_getnbr.c
** File description:
** Return the first number see that
*/

int that_number_i(char const *str)
{
    int i = 0;
    int soluce = 0;

    if (str[i] == '0') {
        for (; str[i] == '0'; i++);
        that_number_i(&str[i]);
    }
    for (; str[i] >= '0' && str[i] <= '9' && i <= 11; i++) {
        soluce -= (str[i] - '0');
        if (i < 10 && str[i + 1] >= '0' && str[i + 1] <= '9') {
            soluce *= 10;
        }
    }
    return soluce;
}

long that_number(char const *str)
{
    int i = 0;
    long soluce = 0;

    if (str[i] == '0') {
        for (; str[i] == '0'; i++);
        that_number(&str[i]);
    }
    for (; str[i] >= '0' && str[i] <= '9' && i <= 11; i++) {
        soluce -= (str[i] - '0');
        if (i < 10 && str[i + 1] >= '0' && str[i + 1] <= '9') {
            soluce *= 10;
        }
    }
    return soluce;
}

int that_test(long you, int s)
{
    if (you == s) {
        return s;
    }
    return 0;
}

int my_getnbr(char const *str)
{
    int i = 0;
    long you = 0;
    int soluce = 0;

    for (; str[i] != '\0' && !(str[i] >= '0' && str[i] <= '9'); i++) {
        if (str[i] == '-') {
            soluce++;
        }
    }
    if (i > 0 && soluce % 2 != 0) {
        you = that_number(&str[i]);
        soluce = that_number_i(&str[i]);
    } else {
        you = (-1) * that_number(&str[i]);
        soluce = (-1) * that_number_i(&str[i]);
    }
    return (that_test(you, soluce));
}
