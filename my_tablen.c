/*
** EPITECH PROJECT, 2023
** bs my_ls
** File description:
** bs my_ls
*/

int my_tablen(char **tab)
{
    int i = 0;

    while (tab[i] != 0)
        i++;
    return (i);
}
