/*
** EPITECH PROJECT, 2023
** MY_STRNCMP
** File description:
** Reproduce fn
*/

#include <stdio.h>

int my_strncmp(char *s1, char *s2, int n)
{
    for (int i = 0; i < n && s1[i] != '\0' && s2[i] != '\0'; i++) {
        if (*s1 != *s2)
            return 1;
    }
    return 0;
}
