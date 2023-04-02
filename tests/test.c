/*
** EPITECH PROJECT, 2022
** tests.c
** File description:
** tests.c
*/
#include <stddef.h>
#include <signal.h>
#include <stdio.h>
#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "my.h"

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}
    
Test(my_printf_flag_S, simple_string, .init = redirect_all_std)
{
    char str[5];
    my_strcpy(str,"toto");
    str[1] = 6;
    my_printf("%S",str);
    cr_assert_stdout_eq_str("t\\006to");
}

Test(my_printf_flag_b, simple_string, .init=redirect_all_std)
{
    int c = 100;
    my_printf("%b", c);
    cr_assert_stdout_eq_str("1100100");
}

Test(my_printf_flag_n, simple_string, .init = redirect_all_std)
{
    int c = 0;
    my_printf("test: %n", &c);
    my_printf("%d", c);
    cr_assert_stdout_eq_str("test: 6");
}

Test(my_printf_flag_i, simple_string, .init = redirect_all_std)
{
    my_printf("%i",-12);
    cr_assert_stdout_eq_str("-12");
}

Test(my_printf_flag_s, simple_string, .init=redirect_all_std)
{
    my_printf("%s", "test");
    cr_assert_stdout_eq_str("test");
}

Test(my_printf_flag_c, simple_string, .init = redirect_all_std)
{
    my_printf("%c", 'c');
    cr_assert_stdout_eq_str("c");
}

Test(my_printf_flag_d, simple_string, .init=redirect_all_std)
{
    my_printf("%d", 12);
    cr_assert_stdout_eq_str("12");
}

Test(my_printf_flag_o, simple_string, .init=redirect_all_std)
{
    my_printf("%o", 100);
    cr_assert_stdout_eq_str("144");
}

Test(my_printf_flag_x, simple_string, .init=redirect_all_std)
{
    my_printf("%x", 123456);
    cr_assert_stdout_eq_str("1e240");
}

Test(my_printf_flag_X, simple_string, .init=redirect_all_std)
{
    my_printf("%X", 123456);
    cr_assert_stdout_eq_str("1E240");
}

Test(my_printf_flag_u, simple_string, .init=redirect_all_std)
{
    my_printf("%u", 3456);
    cr_assert_stdout_eq_str("3456");
}

Test(my_printf_flag_percent, simple_string, .init=redirect_all_std)
{
    my_printf("%%");
    cr_assert_stdout_eq_str("%");
}

Test(my_printf_flag_hashtag_o, simple_string, .init=redirect_all_std)
{
    my_printf("%#o");
    cr_assert_stdout_eq_str("0361100");
}

Test(my_printf_flag_hashtag_x, simple_string, .init=redirect_all_std)
{
    my_printf("%#x");
    cr_assert_stdout_eq_str("0x1e240");
}

Test(my_printf_flag_hashtag_upperx, simple_string, .init=redirect_all_std)
{
    my_printf("%#X");
    cr_assert_stdout_eq_str("0X1E240");
}

Test(my_printf_flag_space_d, simple_string, .init=redirect_all_std)
{
    my_printf("% d", 123456);
    cr_assert_stdout_eq_str(" 123456");
}

Test(my_printf_flag_space_i, simple_string, .init=redirect_all_std)
{
    my_printf("% i", 123456);
    cr_assert_stdout_eq_str(" 123456");
}

Test(my_printf_flag_space_x, simple_string, .init=redirect_all_std)
{
    my_printf("% x", 33);
    cr_assert_stdout_eq_str("21");
}
