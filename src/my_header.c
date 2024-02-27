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
    int test = 0;
    header->prog_size = 0;
    my_strcpy(header->comment, line[1]);
    if (fd_new != -1) {
        write(fd_new, &test, 3);
        write(fd_new, &header->prog_size, sizeof(header->prog_size));
        write(fd_new, header->comment, sizeof(header->comment));
    }
}

static void my_name(char **line, int fd_new, header_t *header)
{
    unsigned char bytes[4];

    header->magic = COREWAR_EXEC_MAGIC;
    my_strcpy(header->prog_name, line[1]);
    bytes[0] = (header->magic >> 24) & 0xFF;
    bytes[1] = (header->magic >> 16) & 0xFF;
    bytes[2] = (header->magic >> 8) & 0xFF;
    bytes[3] = header->magic & 0xFF;
    if (fd_new != -1) {
        write(fd_new, bytes, 4);
        write(fd_new, header->prog_name, sizeof(header->prog_name));
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
