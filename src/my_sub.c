/*
** EPITECH PROJECT, 2024
** B-CPE-200-LIL-2-1-robotfactory-charles.ignoux
** File description:
** my_sub.c
*/

#include "my.h"
#include <stdint.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

void my_sub(char **line, int fd)
{
    uint8_t instr = 0x02;
    uint32_t num1;
    uint32_t num2;

    if (my_tablen(line) != 3)
        exit(84);
    num1 = my_getnbr(line[1]);
    num2 = my_getnbr(line[2]);
    if (fd != -1) {
        write(fd, &instr, sizeof(instr));
        write(fd, &num1, sizeof(num1));
        write(fd, &num2, sizeof(num2));
    }
}
