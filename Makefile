##
## EPITECH PROJECT, 2023
## makefile hunter
## File description:
## makefile hunter
##

SRC	=	src/my_strlen.c \
		src/my_strcmp.c \
		src/my_str_to_word_array_char.c \
		src/my_tablen.c \
		src/my_getnbr.c \
		src/my_add.c \
		src/my_sub.c \
		src/my_mul.c \
		src/my_put.c \
		src/my_new_name.c \
		src/my_strcat.c \
		src/my_strcpy.c \
		src/my_header.c \
		src/my_strncmp.c

OBJ     =       $(SRC:.c=.o)

NAME    =       libmy.a

all:     $(NAME)

$(NAME):		$(OBJ)
		ar rc $(NAME) $(OBJ)
		mv $(NAME) ./src
		gcc -o asm src/main.c -L./src -lmy
clean:
	rm -f $(OBJ)

fclean: clean
	        rm -f ./src/$(NAME)

re:     fclean all
