##
## Makefile for emacs in /home/Victor/101pong
## 
## Made by Victor Zhu
## Login   <Victor@epitech.net>
## 
## Started on  Mon Nov  7 11:11:25 2016 Victor Zhu
## Last update Thu Apr  6 22:12:31 2017 Victor Zhu
##

CC	=	gcc

RM	=	rm -f

CFLAGS	+=	-Wextra -Wall -g3
CFLAGS	+=	-I./include

SRCS	=	lib/my_putchar.c	\
		lib/my_putstr.c		\
		lib/my_putstr_error.c	\
		lib/my_strlen.c		\
		lib/my_put_nbr.c	\
		src/check_error.c	\
		src/main.c

OBJS	=	$(SRCS:.c=.o)

NAME	=	110borwein

all:	$(NAME)

$(NAME):	$(OBJS)
	$(CC) -lm $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY:	all clean fclean re

coffee:	all clean
	@echo "COFFEE MADED B)"
