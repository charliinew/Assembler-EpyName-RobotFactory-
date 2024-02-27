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

static void my_asm(char **tab, int fd_new)
{

    my_header(tab, fd_new);
    my_body(tab, fd_new);
    close(fd_new);
}

static void verif_h(char **av)
{
    if (av[1] != NULL && my_strcmp(av[1], "-h") == 0)
        my_putstr("USAGE\n./asm file_name[.s]\nDESCRIPTION\nfile_name file in"
                    " assembly language to be converted into file_name.cor, "
                    "an executable in the Virtual Macine.\n");
}

int main(int ac, char **av)
{
    struct stat s;
    int fd = open(av[1], O_RDONLY);
    char *buffer;
    char **tab;
    int fd_new;

    verif_h(av);
    if (fd == -1)
        return 84;
    fd_new = open(my_new_name(av[1]), O_WRONLY | O_CREAT |
        O_TRUNC, S_IRUSR | S_IWUSR);
    stat(av[1], &s);
    buffer = malloc(s.st_size);
    read(fd, buffer, s.st_size + 1);
    if (buffer == NULL)
        return 84;
    buffer[s.st_size] = '\0';
    tab = my_str_to_word_array_char(buffer, "\n");
    my_asm(tab, fd_new);
    return 0;
}
