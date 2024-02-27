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
void my_header(char **, int);
char *my_new_name(char *);
char *my_strcat(char *, char const *);
char *my_strcpy(char *, char const *);
int my_putchar(char);
int my_putstr(char const *);
int my_compute_power_it(int nb, int p);
void my_body(char **, int);
void my_live(char ***, int, int);
void my_ld(char ***, int, int);
void my_st(char ***, int, int);
void my_add(char ***, int, int);
void my_sub(char ***, int, int);
void my_and(char ***, int, int);
void my_or(char ***, int, int);
void my_xor(char ***, int, int);
void my_zjmp(char ***, int, int);
void my_ldi(char ***, int, int);
void my_sti(char ***, int, int);
void my_fork(char ***, int, int);
void my_lld(char ***, int, int);
void my_lldi(char ***, int, int);
void my_lfork(char ***, int, int);
void my_aff(char ***, int, int);
int search_coding_byte(char **);
int search_type(char *);

static void (*f_ptr[16])(char ***, int, int) = {&my_live, &my_ld,
    &my_st, &my_add, &my_sub, &my_and, &my_or, &my_xor,
    &my_zjmp, &my_ldi, &my_sti, &my_fork, &my_lld,
    &my_lldi, &my_lfork, &my_aff};

#endif //MY_H
