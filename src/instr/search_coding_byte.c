/*
** EPITECH PROJECT, 2024
** B-CPE-200-LIL-2-1-robotfactory-charles.ignoux
** File description:
** search_coding_byte.c
*/

#include <stdlib.h>
#include "../my.h"

static void search_coding_byte2(char **line, int i, int *p, int *coding_byte)
{
    if (line[i][0] == 'r') {
        *coding_byte += my_compute_power_it(2, *p - 1);
        *p -= 2;
    }
    if (line[i][0] == '%') {
        *coding_byte += my_compute_power_it(2, *p);
        *p -= 2;
    }
    if (line[i][0] >= '0' && line[i][0] <= '9') {
        *coding_byte += my_compute_power_it(2, *p);
        *coding_byte += my_compute_power_it(2, *p - 1);
        *p -= 2;
    }
}

int search_coding_byte(char **line)
{
    int i;
    int p = 7;
    int coding_byte = 0;

    for (i = 1; line[i] != NULL; i++)
        search_coding_byte2(line, i, &p, &coding_byte);
    return coding_byte;
}