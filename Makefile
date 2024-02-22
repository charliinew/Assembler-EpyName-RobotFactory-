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

OBJ     =       $(SRC:.c=.o)

NAME    =       libmy.a

all:     $(NAME)

$(NAME):		$(OBJ)
		ar rc $(NAME) $(OBJ)
		mv $(NAME) ./src
		gcc -g -o yolotron-asm src/yolotron-vm.c -L./src -lmy
clean:
	rm -f $(OBJ)

fclean: clean
	        rm -f ./src/$(NAME)

re:     fclean all
