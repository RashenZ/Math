##
## Makefile for emacs in /home/Victor/Mathematique/108trigo
## 
## Made by Victor Zhu
## Login   <Victor@epitech.net>
## 
## Started on  Mon Mar  6 13:16:35 2017 Victor Zhu
## Last update Sun Mar 19 17:45:04 2017 Victor Zhu
##

CC	=	gcc

RM	=	rm -f

CFLAGS	+=	-g3 -Wall -Wextra
CFLAGS	+=	-I./include

SRCS	=	lib/my_putchar.c			\
		lib/my_putstr.c				\
		lib/my_putstr_error.c			\
		lib/my_strlen.c				\
		lib/my_put_nbr.c			\
		lib/my_atoi.c				\
		lib/my_strcmp.c				\
		src/error.c				\
		src/show.c				\
		src/help.c				\
		src/my_trigo.c				\
		src/exp_trigo.c				\
		src/matrix_tools/my_multi_matrix.c	\
		src/matrix_tools/my_divide_matrix.c	\
		src/matrix_tools/my_add_matrix.c	\
		src/matrix_tools/my_sous_matrix.c	\
		src/compare_matrice.c			\
		src/cosh_trigo.c			\
		src/sinh_trigo.c			\
		src/cos_trigo.c				\
		src/sin_trigo.c				\
		src/main.c				\

OBJS	=	$(SRCS:.c=.o)

NAME	=	108trigo

all:	$(NAME)

$(NAME):	$(OBJS)
	$(CC) -lm $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	all clean

.PHONY:	all clean fclean re

coffee: all clean
	@echo "COFFEE MAKED B)"
