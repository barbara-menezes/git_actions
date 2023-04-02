/*
** EPITECH PROJECT, 2022
** my_all_hexadecimal_convertors
** File description:
** flags 'x', 'X'
*/

#include <unistd.h>
#include "../include/my.h"

int my_up_hexa_conv(long unsigned int decimal)
{
    long int quotient = decimal;
    int reste = 0;
    int i = 0;
    int j = 0;
    char hexa[100];

    while (quotient != 0) {
        reste = quotient % 16;
        if (reste < 10) {
            hexa[j++] = '0' + reste;
        } else {
            hexa[j++] = 55 + reste;
        }
        quotient = quotient / 16;
    }
    for (i = j - 1; i >= 0; i--) {
        my_putchar(hexa[i]);
    }
    return (0);
}

int my_low_hexa_conv(long unsigned int decimal)
{
    long int quotient = decimal;
    int reste = 0;
    int i = 0;
    int j = 0;
    char hexa[100];

    while (quotient != 0) {
        reste = quotient % 16;
        if (reste < 10) {
            hexa[j++] = '0' + reste;
        } else {
            hexa[j++] = 87 + reste;
        }
        quotient = quotient / 16;
    }
    for (i = j - 1; i >= 0; i--) {
        my_putchar(hexa[i]);
    }
    return (0);
}

int my_up_hexa_zero(long unsigned int decimal)
{
    long int quotient = decimal;
    int reste = 0;
    int i = 0;
    int j = 0;
    char hexa[100];

    while (quotient != 0) {
        reste = quotient % 16;
        if (reste < 10) {
            hexa[j++] = '0' + reste;
        } else {
            hexa[j++] = 55 + reste;
        }
        quotient = quotient / 16;
    }
    my_putstr("0X");
    for (i = j - 1 ; i >= 0; i--) {
        my_putchar(hexa[i]);
    }
    return (0);
}

int my_low_hexa_zero(long unsigned int decimal)
{
    long int quotient = decimal;
    int reste = 0;
    int i = 0;
    int j = 0;
    char hexa[100];

    while (quotient != 0) {
        reste = quotient % 16;
        if (reste < 10) {
            hexa[j++] = '0' + reste;
        } else {
            hexa[j++] = 87 + reste;
        }
        quotient = quotient / 16;
    }
    my_putstr("0x");
    for (i = j -1 ; i >= 0; i--) {
        my_putchar(hexa[i]);
    }
    return (0);
}
