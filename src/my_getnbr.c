/*
** EPITECH PROJECT, 2023
** my_getnbr
** File description:
** qzd
*/

int nbr(int i, int nombre, char const *str, int *signe)
{
    if (i > 0 && str[i - 1] == '+' ||
        i > 0 && str[i - 1] == '-')
        *signe = str[i - 1];
    nombre = nombre * 10 + (str[i] - 48);
    return (nombre);
}

int valeur_ext(int nombre)
{
    int valeur_max = 2147483647;
    int valeur_min = -2147483648;

    if (nombre < (valeur_max / 10) && nombre > (valeur_min / 10)) {
        return (nombre);
    }
    return (0);
}

int nbr_signe(int signe, int nombre)
{
    if (signe == '-') {
        nombre = -1 * nombre;
        return (nombre);
    }
    return (nombre);
}

int my_getnbr(char const *str)
{
    int i = 0;
    int nombre = 0;
    int signe = '+';

    while (str[i] != '\0') {
        if (nombre != 0 && (str[i] < '0' || str[i] > '9')) {
            nombre = nbr_signe(signe, nombre);
            return (valeur_ext(nombre));
        }
        if (str[i] >= '0' && str[i] <= '9')
            nombre = nbr(i, nombre, str, &signe);
        i++;
    }
    nombre = nbr_signe(signe, nombre);
    return (valeur_ext(nombre));
}
