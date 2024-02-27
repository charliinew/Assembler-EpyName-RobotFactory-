/*
** EPITECH PROJECT, 2024
** B-CPE-200-LIL-2-1-robotfactory-charles.ignoux
** File description:
** my_body.c
*/

#include "my.h"
#include <stdlib.h>
#include "op.h"

static int my_body2(char ***data, int fd_new, int i)
{
    int j;

    for (j = 0; op_tab[j].mnemonique != NULL && my_strcmp(data[i][0],
        op_tab[j].mnemonique) != 0 || my_strlen(op_tab[j].mnemonique) !=
        my_strlen(data[i][0]); j++);
    if (op_tab[j].mnemonique != NULL) {
        f_ptr[j](data, fd_new, i);
        return 0;
    } else
        return 1;
}

void my_body(char **tab, int fd_new)
{
    char ***data = malloc(sizeof(char **) * (my_tablen(tab) + 1));
    int i;

    for (i = 0; tab[i] != NULL; i++)
        data[i] = my_str_to_word_array_char(tab[i], " ,\t");
    data[i] = NULL;
    while (data[i] != NULL) {
        if (my_body2(data, fd_new, i) == 1)
            break;
        i++;
    }
}