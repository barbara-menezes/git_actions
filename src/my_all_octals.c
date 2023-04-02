/*
** EPITECH PROJECT, 2022
** octal functions
** File description:
** my_printf octal 'o' & '#o'
*/

#include <stdio.h>
#include "../include/my.h"

int my_octal_convert(unsigned int n)
{
    int octal_num[100];
    int i = 0;
    while (n != 0) {
        octal_num[i] = n % 8;
        n = n / 8;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
        my_put_unsigned_nb(octal_num[j]);
}

int my_octal_zero(unsigned int n)
{
    int octal_num[100];
    int i = 0;
    while (n != 0) {
        octal_num[i] = n % 8;
        n = n / 8;
        i++;
    }
    my_putchar('0');
    for (int j = i -1 ; j >= 0; j--)
        my_put_unsigned_nb(octal_num[j]);
}
