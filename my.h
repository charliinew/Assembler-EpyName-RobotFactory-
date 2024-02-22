/*
** EPITECH PROJECT, 2024
** B-CPE-200-LIL-2-1-bsrobotfactory-charles.ignoux
** File description:
** my.h
*/

#ifndef MY_H
    #define MY_H

int my_put_nbr(long long);
int my_strlen(char *);
void my_putchar(char);
int my_putstr(char const *);
char *my_strlowcase(char *);
int my_strcmp(char const *, char const *);
char **my_str_to_word_array_char(char const *, char *);
int my_strncmp(char const *, char const *, int);
char *my_strcat(char *, char const *);
char *my_strdup(char *);
int my_tablen(char **);
char *my_strcpy(char *, char const *);
int my_add(char **, char **);
int my_sub(char **, char **);
int my_mul(char **, char **);
int my_put(char **, char **);

static char const *f_name[4] = {"add", "sub", "mul", "put"};
static void const (*f_ptr[4])(char **, char **) = {&my_add, &my_sub,
    &my_mul, &my_put};

#endif //MY_H
