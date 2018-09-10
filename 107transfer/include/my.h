/*
** my.h for emacs in /home/Victor/Mathematique/107transfer
** 
** Made by Victor Zhu
** Login   <Victor@epitech.net>
** 
** Started on  Fri Feb 24 15:02:00 2017 Victor Zhu
** Last update Mon Feb 27 11:46:53 2017 Stefinyn Stanislav
*/

#define SYNTAX_ERROR	"syntax error\n"

#ifndef MY_H
#define MY_H

typedef struct s_polynome	t_polynome;


void	my_putchar(char);
void	my_putstr_error(char *);
int	my_strlen(char *);
int	my_putstr(char *);

int	check_error(int, char **);
int	display_man(void);

#endif
