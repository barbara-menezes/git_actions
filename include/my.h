/*
** EPITECH PROJECT, 2022
** my_printf header
** File description:
** all used functions for my_printf
*/

#include <stdarg.h>

#ifndef MY_H_
    #define MY_H_
void my_putchar(char c);
int my_put_nbr(int nb);
int my_putstr(char const *str);
char *my_strcpy(char *dest, char const *src);
void my_n(int count, int *arg);
int my_printf(const char *format, ...);
void my_put_binary(va_list ap);
void my_put_special_string(va_list *ap);
void my_put_octal(int nb);
void my_print_base(int *vetor, int i);
int error_handler(void);
void my_n(int count, int *arg);
int my_num_dig(int nb);
int my_octal_convert(unsigned int n);
int my_octal_zero(unsigned int n);
int my_up_hexa_conv(long unsigned int decimal);
int my_low_hexa_conv(long unsigned int decimal);
int my_up_hexa_zero(long unsigned int decimal);
int my_low_hexa_zero(long unsigned int decimal);
int int_len(int str);
int my_num_dig(int nb);
int my_put_unsigned_nb(unsigned int nb);
int my_strlen(char const *str);
int my_u_flag(unsigned int nb);
char space(int nbr);
#endif
