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
		src/my_new_name.c \
		src/my_strcat.c \
		src/my_strcpy.c \
		src/my_header.c \
		src/my_strncmp.c \
		src/my_putchar.c \
		src/my_putstr.c \
		src/my_compute_power_it.c \
		src/my_body.c \
		src/instr/my_live.c \
		src/instr/my_add.c \
		src/instr/my_aff.c \
		src/instr/my_and.c \
		src/instr/my_fork.c \
		src/instr/my_ld.c \
		src/instr/my_ldi.c \
		src/instr/my_lfork.c \
		src/instr/my_lld.c \
		src/instr/my_lldi.c \
		src/instr/my_or.c \
		src/instr/my_st.c \
		src/instr/my_sti.c \
		src/instr/my_sub.c \
		src/instr/my_xor.c \
		src/instr/my_zjmp.c \
		src/instr/search_coding_byte.c \
		src/instr/search_type.c \

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
