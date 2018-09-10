/*
** my_trigo.c for emacs in /home/Victor/Mathematique/108trigo
** 
** Made by Victor Zhu
** Login   <Victor@epitech.net>
** 
** Started on  Mon Mar  6 14:38:29 2017 Victor Zhu
** Last update Sun Mar 19 16:07:50 2017 Victor Zhu
*/

#include <math.h>
#include <stdlib.h>
#include "my.h"

double		*fill_identity_inside(double *str, int count, int size)
{
  int		i = 0;

  while (size != 0)
    {
      if (i == count)
	str[i] = 1;
      else
	str[i] = 0;
      i = i + 1;
      size = size - 1;
      
    }
  str[i] = '\0';
  return (str);
}

double		**get_identity_matrice(int size)
{
  int		line = 0;
  int		identity_count = 0;
  double	**identity_matrice;

  if ((identity_matrice = malloc(sizeof(double*) * (size + 1))) == NULL)
    {
      my_putstr_error("error malloc\n");
      exit(84);
    }
  while (line < size)
    {
      if ((identity_matrice[line] = malloc(sizeof(double) * (size + 1))) == NULL)
	{
	  my_putstr_error("error malloc\n");
	  exit(84);
	}
      identity_matrice[line] = fill_identity_inside(identity_matrice[line], identity_count, size);
      line = line + 1;
      identity_count = identity_count + 1;
    }
  identity_matrice[line] = NULL;
  return (identity_matrice);
}
