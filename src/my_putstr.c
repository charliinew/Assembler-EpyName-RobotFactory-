/*
** EPITECH PROJECT, 2023
** my_putstr
** File description:
** compte
*/

#include "my.h"

int my_putstr(char const *str)
{
    int n = 0;

    while (str[n] != '\0') {
        my_putchar(str[n]);
        n += 1;
    }
}
