/*
** EPITECH PROJECT, 2022
** my_printf.c
** File description:
** my printf
*/
#include <stdio.h>
#include <stdarg.h>
#include "../include/my.h"
void my_flags(va_list ap, int i, int count, const char *format);
void my_simple_flags(va_list ap, int i, int count, char data);

int my_printf(const char *format, ...)
{
    va_list ap;
    int count = 0, i = 0;
    va_start(ap, format);
    if (format[i] == '\0') error_handler();

    for (i; format[i] != '\0'; i++) {
        if (format[i] == '%') {
            my_flags(ap, i, count, format);
            if (format[i + 1] == '#' || format[i + 1] == ' ') {
                i++;
            }
            i++;
        } else {
            my_putchar(format[i]);
        }
        count++;
    }
    va_end(ap);
    return 0;
}

void my_simple_flags(va_list ap, int i, int count, char data)
{
    switch (data) {
    case 'i': my_put_nbr(va_arg(ap, int)); break;
    case 's': my_putstr(va_arg(ap, char *)); break;
    case 'c': my_putchar(va_arg(ap, int)); break;
    case 'd': my_put_nbr(va_arg(ap, int)); break;
    case 'p': my_low_hexa_zero(va_arg(ap, void *)); break;
    case 'o': my_octal_convert(va_arg(ap, unsigned int)); break;
    case 'x': my_low_hexa_conv(va_arg(ap, long unsigned int)); break;
    case 'X': my_up_hexa_conv(va_arg(ap, long unsigned int)); break;
    case 'u': my_u_flag(va_arg(ap, unsigned int)); break;
    case 'b': my_put_binary(va_arg(ap, int)); break;
    case 'S': my_put_special_string(va_arg(ap, char *)); break;
    case 'n': int *pointer = va_arg(ap, int *); my_n(count, pointer); break;
    case '%': my_putchar('%'); break;
    }
}

void my_flags(va_list ap, int i, int count, const char *format)
{
    if (format[i + 1] == '#') {
        if (format[i + 2] == 'o') {
            my_octal_zero(va_arg(ap, unsigned int));
        } if (format[i + 2] == 'X') {
            my_up_hexa_zero(va_arg(ap, long unsigned int));
        } if (format[i + 2] == 'x') {
            my_low_hexa_zero(va_arg(ap, long unsigned int));
        }
    } if (format[i + 1] == ' ' && (format[i + 2] == 'd'
        || format[i + 2] == 'i')) {
        my_putchar(' ');
        my_put_nbr(va_arg(ap, int));
    } else {
        if (format[i + 1] == ' ') {
            my_simple_flags(ap, i, count, format[i + 2]);
        } else {
            my_simple_flags(ap, i, count, format[i + 1]);
        }
    }
}
