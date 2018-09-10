/*
** main.c for emacs in /home/Victor/101pong
** 
** Made by Victor Zhu
** Login   <Victor@epitech.net>
** 
** Started on  Mon Nov  7 10:29:47 2016 Victor Zhu
** Last update Tue Nov  8 09:25:36 2016 Victor Zhu
*/

#include "include/pong.h"

char	argverif(char **av)
{
  int	i;
  int	j;

  i = 1;
  j = 0;
  while (av[i])
    {
      if (av[i][j] >= '0' && av[i][j] <= '9')
	j = j + 1;
      else if (av[i][j] == '.' && av[i][j - 1] >= '0' && av[i][j - 1] <= '9'
	       || av[i][j] == '-' && av[i][j + 1] >= '0' && av[i][j + 1] <= '9')
	j = j + 1;
      else
	{
	  my_putstr(SYNTAX_ERROR_MSG);
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

int	main(int ac, char **av)
{
  if (ac != 8)
    {
      my_putstr(SYNTAX_ERROR_MSG);
      return (84);
    }
  argverif(av);
  debut(av);
  return (0);
}
