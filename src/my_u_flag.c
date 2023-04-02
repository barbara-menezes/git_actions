/*
** EPITECH PROJECT, 2022
** my_u_flag
** File description:
** decimal convertor for 'u' flag for myprintf
*/

#include <unistd.h>
#include "../include/my.h"

int my_u_flag(unsigned int nb)
{
    if (nb > 9) {
        my_put_unsigned_nb(nb / 10);
        my_putchar(nb % 10 + 48);
    } else {
        my_putchar(nb + 48);
    }
    return (0);
}
