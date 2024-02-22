/*
** EPITECH PROJECT, 2023
** my_str_to_word_array
** File description:
** qzdsqzd
*/

#include <stdlib.h>

int my_c_isnt_separateur(char c, char *separateur)
{
    int i = 0;

    while (separateur[i] != '\0') {
        if (c == separateur[i])
            return 0;
        i++;
    }
    return 1;
}

static void count_words2(int *j, int *word_count)
{
    if (*j == 0)
        (*word_count)++;
    (*j)++;
}

static int count_words(char const *str, char *separateur)
{
    int h = 0;
    int j = 0;
    int word_count = 0;

    while (str[h] != '\0') {
        if (my_c_isnt_separateur(str[h], separateur)) {
            count_words2(&j, &word_count);
        } else
            j = 0;
        h++;
    }
    return word_count;
}

void copy_word(char **tab, int word_count, int h, int j)
{
    if (j == 0)
        tab[word_count] = malloc(sizeof(char) * (h + 1));
}

static char **str2(char **tab, int word_count, int j)
{
    if (j != 0) {
        tab[word_count][j] = '\0';
        word_count++;
    }
    tab[word_count] = NULL;
    return tab;
}

static void str1(int *j, int *word_count, char **tab)
{
    if (*j != 0) {
        tab[*word_count][*j] = '\0';
        (*word_count)++;
        *j = 0;
    }
}

char **my_str_to_word_array_char(char const *str, char *separateur)
{
    int h = 0;
    int j = 0;
    int word_count = 0;
    char **tab;
    int total_words = count_words(str, separateur);

    tab = malloc(sizeof(char *) * (total_words + 1));
    while (str[h] != '\0') {
        if (my_c_isnt_separateur(str[h], separateur)) {
            copy_word(tab, word_count, h, j);
            tab[word_count][j] = str[h];
            j++;
        } else
            str1(&j, &word_count, tab);
        h++;
    }
    return str2(tab, word_count, j);
}
