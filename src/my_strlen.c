/*
** EPITECH PROJECT, 2023
** my_strlen.c
** File description:
** renvoie la taile de la chaine de caractere
*/

int my_strlen(char const *str)
{
    int j;

    j = 0;
    while (str[j] != '\0') {
        j++;
    }
    return j;
}
