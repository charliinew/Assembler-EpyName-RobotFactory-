/*
** EPITECH PROJECT, 2024
** B-CPE-200-LIL-2-1-robotfactory-charles.ignoux
** File description:
** my_put.c
*/

#include "my.h"
#include <stdint.h>
#include <stdlib.h>
#include <unistd.h>

void my_put(char **line, int fd)
{


    if (my_tablen(line) != 2)
        exit(84);
    len_str = my_strlen(line[1]);
    if (fd != -1) {
        write(fd, &instr, sizeof(instr));
            write(fd, &len_str, sizeof(len_str));
        write(fd, line[1], len_str);
    }
}
