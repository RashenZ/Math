/*
** my_multi_matrix.c for emacs in /home/Victor/Mathematique/108trigo
** 
** Made by Victor Zhu
** Login   <Victor@epitech.net>
** 
** Started on  Mon Mar  6 23:12:22 2017 Victor Zhu
** Last update Wed Mar 15 20:30:55 2017 Victor Zhu
*/

#include <stdlib.h>
#include "my.h"

double		**my_multi_matrix(double **first_matrix, double **second_matrix, int line, int col)
{
  double	**matrix;
  double	first_value = 0.0;
  double	second_value = 0.0;
  double	result = 0.0;
  int		first_i = -1;
  int		first_j = 0;
  int		second_i = 0;
  int		second_j = 0;
  int		i = -1;
  int		j = 0;
  int		n = 0;

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
	  first_i = first_i + 1;
	  second_j = 0;
	}
      while (first_j != col && second_i != line)
	{
	  first_value = first_matrix[first_i][first_j];
	  second_value = second_matrix[second_i][second_j];
	  result = result + (first_value * second_value);
	  first_j = first_j + 1;
	  second_i = second_i + 1;
	}
      matrix[i][j] = result;
      j = j + 1;
      first_j = 0;
      second_i = 0;
      second_j = second_j + 1;
      result = 0;
      n = n + 1;      
    }
  return (matrix);
}
