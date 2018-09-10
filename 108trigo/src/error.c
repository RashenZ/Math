/*
** error.c for emacs in /home/Victor/Mathematique/108trigo
** 
** Made by Victor Zhu
** Login   <Victor@epitech.net>
** 
** Started on  Mon Mar  6 13:01:01 2017 Victor Zhu
** Last update Wed Mar 15 20:36:50 2017 Victor Zhu
*/

#include "my.h"
#include <math.h>

int	check_if_letter(char **av)
{
  int	i = 2;
  int	j = 0;

  while (av[i])
    {
      if (j == 0 && av[i][j] == '-')
	j = j + 1;
      if (av[i][j] >= '0' && av[i][j] <= '9')
	j = j + 1;
      else
	{
	  my_putstr_error("Syntax error: invalid number given in parameters\n");
	  return (84);
	}
      if (av[i][j] == '\0')
	{
	  i = i + 1;
	  j = 0;
	}
    }
  return (0);
}

int	check_error(int ac, char **av)
{
  int		check;
  double	check_s;

  if (ac < 3)
    {
      my_putstr("USAGE: ./108trigo fun a0 a1 a2 ...\n");
      return (84);
    }
  if ((check = sqrt(ac -2)) != (check_s = sqrt(ac -2)))
    {
      my_putstr_error("Syntax error: invalid number of coeficient given\n");
      return (84);
    }
  if ((check = check_if_letter(av)) == 84)
    return (84);
  return (0);
}
