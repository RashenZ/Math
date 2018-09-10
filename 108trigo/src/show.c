/*
** show.c for emacs in /home/Victor/Mathematique/108trigo
** 
** Made by Victor Zhu
** Login   <Victor@epitech.net>
** 
** Started on  Mon Mar  6 14:33:42 2017 Victor Zhu
** Last update Sun Mar 19 19:07:42 2017 Victor Zhu
*/

#include <stdio.h>
#include "my.h"

void		show_matrice(double **matrice, int size)
{
  int	a;
  int	b;

  a = 0;
  while (a != size)
    {
      b = 0;
      while (b != size)
	{
	  if (b + 1 == size)
	    printf("%.2lf\n", matrice[a][b]);
	  else
	    printf("%.2lf\t", matrice[a][b]);
	  b++;
	}
      a++;
    }
}

