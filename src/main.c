/*
** EPITECH PROJECT, 2024
** B-CPE-200-LIL-2-1-bsrobotfactory-charles.ignoux
** File description:
** yolotron-vm.c
*/

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <stdlib.h>
#include "my.h"

static void yolotron2(char **line, int fd_new)
{
    int i;

    for (i = 0; f_name[i] != NULL && (my_strcmp(line[0], f_name[i]) != 0 ||
        my_strlen(line[0]) != my_strlen((char *) f_name[i])); i++);
    if (f_name[i] != NULL)
        f_ptr[i](line, fd_new);
    else
        exit(84);
}

static void yolotron(char **tab, int fd_new)
{
    char ***data = malloc(sizeof(char **) * (my_tablen(tab) + 1));
    int i;

    for (i = 0; tab[i] != NULL; i++)
        data[i] = my_str_to_word_array_char(tab[i], " ");
    data[i] = NULL;
    for (i = 0; data[i] != NULL; i++)
        yolotron2(data[i], fd_new);
    close(fd_new);
}

int main(int ac, char **av)
{
    struct stat s;
    int fd = open(av[1], O_RDONLY);
    char *buffer;
    char **tab;
    int fd_new;

    if (ac != 3 || fd == -1)
        return 84;
    fd_new = open(av[2], O_WRONLY | O_CREAT |
        O_TRUNC, S_IRUSR | S_IWUSR);
    stat(av[1], &s);
    buffer = malloc(s.st_size);
    read(fd, buffer, s.st_size + 1);
    if (buffer == NULL)
        return 84;
    buffer[s.st_size] = '\0';
    tab = my_str_to_word_array_char(buffer, "\n");
    yolotron(tab, fd_new);
    return 0;
}
