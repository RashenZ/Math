/*
** compare_matrice.c for 108trigo in /home/Stan/108trigo
** 
** Made by Stefinyn Stanislav
** Login   <Stan@epitech.net>
** 
** Started on  Sun Mar 19 16:36:38 2017 Stefinyn Stanislav
** Last update Sun Mar 19 16:50:14 2017 Stefinyn Stanislav
*/

int	compare_matrice(double **matrice1, double **matrice2, int lon, int lar)
{
  int	a;
  int	b;

  a = 0;
  while (a < lon)
    {
      b = 0;
      while (b < lar)
	{
	  if (matrice1[a][b] != matrice2[a][b])
	    return (-1);
	  b++;
	}
      a++;
    }
  return (0);
}
