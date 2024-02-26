/*
** EPITECH PROJECT, 2024
** B-CPE-200-LIL-2-1-robotfactory-charles.ignoux
** File description:
** my_header.c
*/

#include "my.h"
#include <stdlib.h>
#include "op.h"
#include <unistd.h>
#include <stdio.h>
#include <stdio.h>
#include <string.h>

static void my_comment(char **line, int fd_new, header_t *header)
{
    u_int64_t test = 0;
    header->prog_size = 0;
    strcpy(header->comment, line[1]);
    if (fd_new != -1) {
        write(fd_new, &test, sizeof(test));
        write(fd_new, &header->prog_size, sizeof(header->prog_size));
        write(fd_new, header->comment, sizeof (header->comment));
    }
}

void my_header(char **tab, int fd_new)
{
    char ***data = malloc(sizeof(char **) * (my_tablen(tab) + 1));
    int i;
    header_t *header = malloc(sizeof(header_t));

    for (i = 0; tab[i] != NULL; i++)
        data[i] = my_str_to_word_array_char(tab[i], "\"");
    data[i] = NULL;
    for (i = 0; data[i] != NULL && my_strncmp(data[i][0], ".name", 5) != 0;
    i++);
    if (data[i] != NULL)
        my_name(data[i], fd_new, header);
    for (i = 0; data[i] != NULL && my_strncmp(data[i][0], ".comment", 8) != 0;
    i++);
    if (data[i] != NULL)
        my_comment(data[i], fd_new, header);
}
