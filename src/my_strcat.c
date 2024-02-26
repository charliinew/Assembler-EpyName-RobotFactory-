/*
** EPITECH PROJECT, 2024
** B-CPE-200-LIL-2-1-robotfactory-charles.ignoux
** File description:
** my_strcat.c
*/

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int u = 0;

    while (dest[i] != '\0') {
        i ++;
    }
    while (src[u] != '\0') {
        dest[i] = src[u];
        u++;
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
