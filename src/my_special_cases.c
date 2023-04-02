/*
** EPITECH PROJECT, 2022
** my_special_cases.c
** File description:
** My special cases
*/
#include <stdarg.h>
#include <unistd.h>
#include "../include/my.h"

void my_put_binary(va_list ap)
{
    int i = 0, j = 0, value = ap;
    int vetor_bi[my_num_dig(ap)];

    while (value > 0) {
        vetor_bi[i] = value % 2;
        i++;
        value = value / 2;
    }
    my_print_base(vetor_bi, i);

}

void my_put_special_string(va_list *ap)
{
    int i, result;
    char *str = ap;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 32 && str[i] <= 127) {
            my_putchar(str[i]);
        } else {
            my_putstr("\\");
            result = str[i];
            my_put_octal(result);
        }
    }
}

void my_put_octal(int nb)
{
    int i = 0, j = 0, count = 1;
    int vetor_oc[my_num_dig(nb)];

    while (nb * count < 100) {
        my_putchar('0');
        count *= 10;
    }

    for (i = 0; nb > 0; i++) {
        vetor_oc[i] = nb % 8;
        nb = nb / 8;
    }
    my_print_base(vetor_oc, i);
}

void my_print_base(int *vetor, int i)
{
    int j = 0;

    for (j = (i - 1); j >= 0; j--) {
        my_put_nbr(vetor[j]);
    }
}
