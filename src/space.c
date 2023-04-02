/*
** EPITECH PROJECT, 2022
** space
** File description:
** space
*/

#include <unistd.h>
#include "../include/my.h"

char space(int nbr)
{
    if (nbr > 0) {
        my_putchar(' ');
    }
    my_put_nbr(nbr);
    return nbr;
}
