/*
** EPITECH PROJECT, 2022
** error_handler.c
** File description:
** Error handler file
*/

#include <unistd.h>
#include "../include/my.h"

int error_handler(void)
{
    write(2, "error - insuficient arguments", 30);
    return 84;
}
