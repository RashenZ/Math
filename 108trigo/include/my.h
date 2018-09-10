/*
** my.h for emacs in /home/Victor/Mathematique/108trigo/include
** 
** Made by Victor Zhu
** Login   <Victor@epitech.net>
** 
** Started on  Mon Mar  6 13:21:03 2017 Victor Zhu
** Last update Sun Mar 19 18:28:37 2017 Victor Zhu
*/

#ifndef MY_H
#define MY_H

#include "math.h"

void	my_putchar(char);
void	my_putstr_error(char *);
int	my_strcmp(char *, char *);
int	my_put_nbr(int);
int	my_putstr(char *);
int	my_strlen(char *);

int	man_help(void);
int	check_error(int, char **);
void	show_matrice(double **, int);
double	**get_identity_matrice(int);
void	my_trigo_exp(double **, int);
void	my_trigo_cos(double **, int);
void	my_trigo_sin(double **, int);
void	my_trigo_sinh(double **, int);
void	my_trigo_cosh(double **, int);
int	compare_matrice(double **, double **, int, int);

double	**my_add_matrix(double **, double **, int, int);
double	**my_multi_matrix(double **, double **, int, int);
double	**my_divide_matrix(double **, double, int, int);
double	**my_sous_matrix(double **, double **, int, int);

#endif /* MY_H */
