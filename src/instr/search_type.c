/*
** EPITECH PROJECT, 2024
** B-CPE-200-LIL-2-1-robotfactory-charles.ignoux
** File description:
** search_type.c
*/

int search_type(char *str)
{
    if (str[0] == 'r')
        return 1;
    if (str[0] == '%')
        return 4;
    if (str[0] >= '0' && str[0] <= '9')
        return 2;
    return 0;
}