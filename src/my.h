/*
** EPITECH PROJECT, 2024
** B-CPE-200-LIL-2-1-bsrobotfactory-charles.ignoux
** File description:
** my.h
*/

#ifndef MY_H
    #define MY_H

int my_strcmp(char const *, char const *);
char **my_str_to_word_array_char(char const *, char *);
int my_strncmp(char const *, char const *, int);
int my_tablen(char **);
int my_getnbr(char const *);
int my_strlen(char const *);
void my_add(char **, int);
void my_sub(char **, int);
void my_mul(char **, int);
void my_put(char **, int);
void my_header(char **, int);
char *my_new_name(char *);
char *my_strcat(char *, char const *);
char *my_strcpy(char *, char const *);
int my_putchar(char);
int my_putstr(char const *);
void my_body(char **, int);


static char const *f_name[4] = {"add", "sub", "mul", "put"};
static void const (*f_ptr[4])(char **, int) = {&my_add, &my_sub,
    &my_mul, &my_put};

#endif //MY_H
