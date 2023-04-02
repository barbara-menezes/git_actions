/*
** EPITECH PROJECT, 2022
** zero
** File description:
** zero
*/

void my_putchar(char c);
int my_put_nbr(int nb);
int int_len(int str);

int zero(int num, int nbr)
{
    int lenbr = int_len(nbr);
    int i = 0;

    while (i != num) {
        my_putchar('0');
        i++;
    }
    my_put_nbr(nbr);
    return lenbr;
}
