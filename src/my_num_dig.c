/*
** EPITECH PROJECT, 2022
** my_num_dig.c
** File description:
** My number digit
*/

#include "../include/my.h"

int my_num_dig(int nb)
{
    int count = 0;

    while (nb != 0) {
        nb = nb / 10;
        count++;
    }

    return count;
}
