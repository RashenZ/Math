/*
** error.c for emacs in /home/Victor/Mathematique/107transfer
** 
** Made by Victor Zhu
** Login   <Victor@epitech.net>
** 
** Started on  Fri Feb 24 14:34:52 2017 Victor Zhu
** Last update Wed Mar  1 13:18:22 2017 Victor Zhu
*/

#include "my.h"

int	check_number(char *poly)
{
  int	i;

  i = 0;
  if (poly[i] == '-')
    i = i + 1;
  while (poly[i])
    {
      if ((poly[i] >= '0' && poly[i] <= '9') ||
	  (poly[i] == '*' && poly[i + 1] >= '0' && poly[i + 1] <= '9'))
	i = i + 1;
      else if (poly[i] == '*' && poly[i + 1] == '-' && poly[i + 2] >= '0' && poly[i + 2] <= '9')
	i = i + 2;
      else
	{
	  my_putstr(SYNTAX_ERROR);
	  return (84);
	}
    }

  return (0);
}

int	check_error(int ac, char **av)
{
  int	check;
  int	i = 1;

  if (ac < 3)
    {
      my_putstr_error("Syntax error: not enough arguments.\n");
      return (84);
    }
  if (ac % 2 == 0)
    {
      my_putstr_error("Syntax error: invalid number of arguments.\n");
      return (84);
    }
  while (av[i])
    {
      if ((check = check_number(av[i])) == 84)
	return (84);
      i = i + 1;
    }
  return (0);
}
