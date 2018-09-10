/*
** check_error.c for emacs in /home/Victor/Mathematique/borwein
** 
** Made by Victor Zhu
** Login   <Victor@epitech.net>
** 
** Started on  Mon Apr  3 09:45:17 2017 Victor Zhu
** Last update Mon Apr  3 09:58:52 2017 Victor Zhu
*/

#include "my.h"

void	man_help()
{
  printf("USAGE\n\t./110borwein n\n\n");
  printf("DESCRIPTION\n\tn\tconstant defining the integral to be computed\n");
  exit(0);
}

void	check_error(int ac, char **av)
{
  int	i = 1;
  int	j = 0;

  if (ac != 2)
    my_putstr_error("Syntax error : ./110 borwein n\n");
  if (av[1][0] == '-' && av[1][1] == 'h')
    man_help();
  while (av[i][j])
    {
      if (av[i][j] >= '0' && av[i][j] <= '9')
	j = j + 1;
      else
	my_putstr_error("Syntax error: This is not a number\n");
    }
}
