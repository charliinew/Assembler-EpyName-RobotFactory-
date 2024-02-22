/*
** EPITECH PROJECT, 2023
** my_strcmp
** File description:
** qzds
*/

int my_strcmp(char const *s1, char const *s2)
{
    int i;
    int j;
    int resultat;

    i = 0;
    j = 0;
    resultat = 0;
    while (s1[i] != '\0' && s2[j] != '\0') {
        if (s1[i] != s2[j]) {
            resultat = (s1[i] - s2[j]);
            return (resultat);
        }
        i = i + 1;
        j = j + 1;
    }
    return (0);
}
