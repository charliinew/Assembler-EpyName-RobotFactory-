/*
** EPITECH PROJECT, 2024
** B-CPE-200-LIL-2-1-robotfactory-charles.ignoux
** File description:
** my_body.c
*/

#include "my.h"
#include <stdlib.h>

static void my_body(char **tab, int fd_new)
{
    int i;

    for (i = 0; tab[i] != NULL && (my_strcmp([0], f_name[i]) != 0 ||
        my_strlen(line[0]) != my_strlen((char *) f_name[i])); i++);
    if (f_name[i] != NULL)
        f_ptr[i](line, fd_new);
    else
        exit(84);
}