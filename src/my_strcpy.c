/*
** EPITECH PROJECT, 2022
** my_strcpy.c
** File description:
** Task01 of Day06
*/

char *my_strcpy(char *dest, char const *src)
{
    int i;
    for (i = 0; src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    dest[i] = '\0';
    return dest;
}
