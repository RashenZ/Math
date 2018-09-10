/*
** main.c for emacs in /home/Victor/Mathematique/108trigo
** 
** Made by Victor Zhu
** Login   <Victor@epitech.net>
** 
** Started on  Mon Mar  6 12:58:19 2017 Victor Zhu
** Last update Sun Mar 19 17:43:55 2017 Victor Zhu
*/

#include <stdlib.h>
#include <stdio.h>
#include "my.h"

double		**fill_matrice_tab(char **av, int len)
{
  double	**matrice;
  int		line = -1;
  int		i = 2;
  int		j = 0;

  if ((matrice = malloc(sizeof(double*) * len)) == NULL)
    {
      my_putstr_error("Error malloc\n");
      exit(84);
    }
  while (av[i])
    {
      if (j % len == 0)
	{
	  line = line + 1;
	  if ((matrice[line] = malloc(sizeof(double) * len)) == NULL)
	    {
	      my_putstr_error("Error malloc\n");
	      exit(84);
	    }
	  j = 0;
	}
      matrice[line][j] = atof(av[i]);
      i = i + 1;
      j = j + 1;
    }
  return (matrice);
}

int		main(int ac, char **av)
{
  int		check;
  int		racine = sqrt(ac - 2);
  double	**matrice;

  if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h')
    return (man_help());
  if ((check = check_error(ac, av)) == 84)
    return (84);
  matrice = fill_matrice_tab(av, racine);
  if ((check = my_strcmp("EXP", av[1])) == 0)
    my_trigo_exp(matrice, ac - 2);
  else if ((check = my_strcmp("COS", av[1])) == 0)
    my_trigo_cos(matrice, ac - 2);
  else if ((check = my_strcmp("SIN", av[1])) == 0)
    my_trigo_sin(matrice, ac - 2);
  else if ((check = my_strcmp("COSH", av[1])) == 0)
    my_trigo_cosh(matrice, ac - 2);
  else if ((check = my_strcmp("SINH", av[1])) == 0)
    my_trigo_sinh(matrice, ac - 2);
  return (0);
}
