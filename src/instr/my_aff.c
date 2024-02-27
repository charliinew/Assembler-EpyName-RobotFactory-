/*
** EPITECH PROJECT, 2024
** B-CPE-200-LIL-2-1-robotfactory-charles.ignoux
** File description:
** my_aff.c
*/

#include "../my.h"
#include <stdint.h>
#include <stdlib.h>
#include <unistd.h>

void my_aff(char ***data, int new_fd, int i)
{
    uint8_t instr = 0x10;
    u_int8_t coding_byte = search_coding_byte(data[i]);
    int num1 = my_getnbr(data[i][1]);

    if (new_fd != -1) {
        write(new_fd, &instr, sizeof(instr));
        write(new_fd, &coding_byte, sizeof(coding_byte));
        write(new_fd, &num1, search_type(data[i][1]));
    }
}
