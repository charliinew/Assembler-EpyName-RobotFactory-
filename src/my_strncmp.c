/*
** EPITECH PROJECT, 2023
** MY_STRNCMP
** File description:
** Reproduce fn
*/

#include <stdio.h>

int my_strncmp(char *s1, char *s2, int n)
{
    int i;
    int j = 0;

    for (i = 0; s1[i] == ' ' || s1[i] == '\t'; i++);
    while (j < n && s1[i] != '\0' && s2[j] != '\0') {
        if (s1[i] != s2[j])
            return 1;
        i++;
        j++;
    }
    return 0;
}
