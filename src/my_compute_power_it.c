/*
** EPITECH PROJECT, 2023
** my_computer_power_it.c
** File description:
** qlefkj
*/

int my_compute_power_it(int nb, int p)
{
    int n;

    if (p < 0) {
        return (0);
    }
    if (p == 0) {
        return (1);
    }
    if (p == 1) {
        return (nb);
    }
    n = nb;
    for (p; p > 1; p--) {
        nb = nb * n;
    }
    return (nb);
}
