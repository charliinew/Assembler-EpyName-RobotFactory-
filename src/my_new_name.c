/*
** EPITECH PROJECT, 2024
** B-CPE-200-LIL-2-1-robotfactory-charles.ignoux
** File description:
** my_new_name.c
*/

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <stdlib.h>
#include "my.h"

char *my_new_name(char *name)
{
    char *new_name;

    if (name[my_strlen(name) - 1] != 's' || name[my_strlen(name) - 2] != '.')
        return NULL;
    name[my_strlen(name) - 2] = '\0';
    new_name = malloc(sizeof(char) * (my_strlen(name) + 3));
    my_strcpy(new_name, name);
    my_strcat(new_name, ".cor");
    printf("%s\n", new_name);
    return new_name;
}
