/*
** EPITECH PROJECT, 2024
** B-CPE-200-LIL-2-1-robotfactory-charles.ignoux
** File description:
** my_live.c
*/

#include "../my.h"
#include <stdint.h>
#include <unistd.h>

void my_live(char ***data, int new_fd, int i)
{
    uint8_t instr = 0x01;
    uint32_t num1;

    num1 = my_getnbr(data[i][1]);
    if (new_fd != -1) {
        write(new_fd, &instr, sizeof(instr));
        write(new_fd, &num1, sizeof(num1));
    }
}