/*
** EPITECH PROJECT, 2024
** B-CPE-200-LIL-2-1-robotfactory-charles.ignoux
** File description:
** my_strcpy.c
*/

char *my_strcpy(char *dest, char const *src)
{
    int b = 0;

    while (src[b] != '\0') {
        dest[b] = src[b];
        b ++;
    }
    dest[b] = '\0';
    return dest;
}
