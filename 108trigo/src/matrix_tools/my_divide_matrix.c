/*
** my_divide_matrix.c for emacs in /home/Victor/Mathematique/108trigo
** 
** Made by Victor Zhu
** Login   <Victor@epitech.net>
** 
** Started on  Sun Mar 19 13:02:27 2017 Victor Zhu
** Last update Sun Mar 19 16:05:09 2017 Victor Zhu
*/

#include <stdlib.h>
#include <stdio.h>
#include "my.h"

double          **my_divide_matrix(double **first_matrix, double divider, int line, int col)
{
  double        **matrix;
  double        first_value = 0.0;
  double        result = 0.0;
  int           first_i = -1;
  int           first_j = 0;
  int           i = -1;
  int           j = 0;
  int           n = 0;

  if ((matrix = malloc(sizeof(double*) * (line))) == NULL)
    {
      my_putstr_error("Error malloc\n");
      exit(84);
    }
  while (n < line * col)
    {
      if ((j % col) == 0)
	{
	  i = i + 1;
	  if ((matrix[i] = malloc(sizeof(double) * (col + 1))) == NULL)
	    exit(84);
	  matrix[i][j] = 0.0;
	  j = 0;
	  first_j = 0;
	  first_i = first_i + 1;
	}
      first_value = first_matrix[first_i][first_j];
      result = first_value / divider;
      matrix[i][j] = result;
      j = j + 1;
      first_j = first_j + 1;
      n = n + 1;
    }
  return (matrix);
}
