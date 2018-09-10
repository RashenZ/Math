##
## Makefile for my_printf in /home/Stan/Unix/my_printf/PSU_2016_my_printf
##
## Made by stanislav stefinyn
## Login   <Stan@epitech.net>
##
## Started on  Sun Nov 20 00:16:23 2016 stanislav stefinyn
## Last update Thu Mar  2 13:39:44 2017 Victor Zhu
##

RM	=	rm -rf

AR	=	ar rc

CC	=	gcc -g3 -Wall -Wextra

SRCS	=	lib/my_putchar.c	\
		lib/my_putstr_error.c	\
		lib/my_strlen.c		\
		lib/my_put_nbr.c	\
		lib/my_putstr.c		\
		src/error.c		\
		src/display.c		\
		src/main.c

CFLAGS	=	-I./include

OBJS	=	$(SRCS:.c=.o)

NAME	=	107transfer


all:	$(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME) -lm 
	$(RM) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
