/*
** cos_trigo.c for emacs in /home/Victor/Mathematique/108trigo
** 
** Made by Victor Zhu
** Login   <Victor@epitech.net>
** 
** Started on  Sun Mar 19 15:38:07 2017 Victor Zhu
** Last update Sun Mar 19 16:31:00 2017 Victor Zhu
*/

#include "my.h"

void	my_trigo_cos(double **matrice, int len)
{
  double        **ancient_matrix;
  double        **identity_matrice;
  double        **multi_matrix_result = matrice;
  double        **matrice_result;
  double        divider_result = 1;
  double        divider = 2.0;
  double        stock_divider = divider;
  int           check = 0;
  int           mat_len = sqrt(len);
  int           pow = 2;
  int           stock_pow = 1;
  int		count = 1;

  identity_matrice = get_identity_matrice(sqrt(len));
  matrice_result = identity_matrice;
  while (check != 5)
    {
      ancient_matrix = matrice_result;
      while (stock_pow < pow)
	{
	  multi_matrix_result = my_multi_matrix(multi_matrix_result, matrice, mat_len, mat_len);
	  stock_pow = stock_pow + 1;
	}
      while (divider != 1)
	{
	  divider_result = divider_result * divider;
	  divider = divider - 1;
	}
      multi_matrix_result = my_divide_matrix(multi_matrix_result, divider_result, mat_len, mat_len);
      if (count % 2 == 0)
	matrice_result = my_add_matrix(matrice_result, multi_matrix_result, mat_len, mat_len);
      else
	matrice_result = my_sous_matrix(matrice_result, multi_matrix_result, mat_len, mat_len);
      multi_matrix_result = matrice;
      pow = pow + 2;
      stock_pow = 1;
      stock_divider = stock_divider + 2;
      divider = stock_divider;
      divider_result = 1;
      count = count + 1;
      if (compare_matrice(matrice_result, ancient_matrix, mat_len, mat_len) == 0)
	check = check + 1;
      else
	check = 0;
    }
  show_matrice(matrice_result, sqrt(len));
}
