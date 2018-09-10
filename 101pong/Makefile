##
## Makefile for emacs in /home/Victor/101pong
## 
## Made by Victor Zhu
## Login   <Victor@epitech.net>
## 
## Started on  Mon Nov  7 11:11:25 2016 Victor Zhu
## Last update Mon Nov  7 22:33:25 2016 Victor Zhu
##

CC	=	gcc

RM	=	rm -f

CFLAG	+=	-Wextra -Wall -Werror
#CFLAG	+=	-ansi -pedantic
CFLAG	+=	-I

SRCS	=	lib/my_putchar.c	\
		lib/my_put_nbr.c	\
		lib/my_putstr.c		\
		lib/my_strlen.c		\
		src/pong.c		\
		src/main.c

OBJS	=	$(SRCS:.c=.o)

NAME	=	101pong

all:	$(NAME)

$(NAME):	$(OBJS)
	$(CC) $(OBJS) -o $(NAME) -lm

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	all clean

.PHONY:	all clean fclean re
