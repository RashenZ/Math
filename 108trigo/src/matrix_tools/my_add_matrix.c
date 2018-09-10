/*
** my_add_matrix.c for emacs in /home/Victor/Mathematique/108trigo
** 
** Made by Victor Zhu
** Login   <Victor@epitech.net>
** 
** Started on  Wed Mar 15 10:47:32 2017 Victor Zhu
** Last update Wed Mar 15 20:28:58 2017 Victor Zhu
*/

#include <stdlib.h>
#include "my.h"

double	**my_add_matrix(double	**first_m, double **second_m, int line, int col)
{
  double	**matrix;
  double        first_value = 0.0;
  double        second_value = 0.0;
  double	result = 0.0;
  int           first_i = -1;
  int           first_j = 0;
  int           second_i = -1;
  int           second_j = 0;
  int           i = -1;
  int           j = 0;
  int           n = 0;

  if ((matrix = malloc(sizeof(double*) * (line + 1))) == NULL)
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
	  first_i = first_i + 1;
	  first_j = 0;
	  second_i = second_i + 1;
	  second_j = 0;
	  j = 0;
	}
      first_value = first_m[first_i][first_j];
      second_value = second_m[second_i][second_j];
      result = first_value + second_value;
      matrix[i][j] = result;
      j = j + 1;
      first_j = first_j + 1;
      second_j = second_j + 1;
      n = n + 1;
    }
  return (matrix);
}
