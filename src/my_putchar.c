/*
** EPITECH PROJECT, 2022
** needed functioon day7
** File description:
** day07 putchar
*/

#include <unistd.h>
#include "../include/my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}
