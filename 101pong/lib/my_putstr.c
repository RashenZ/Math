/*
** my_putstr.c for emacs in /home/Victor
** 
** Made by Victor Zhu
** Login   <Victor@epitech.net>
** 
** Started on  Thu Oct  6 20:49:28 2016 Victor Zhu
** Last update Mon Nov  7 11:10:12 2016 Victor Zhu
*/

#include "../include/pong.h"

int	my_putstr(char *str)
{
  int	a;

  a = 0;
  while (str[a] != '\0')
    {
      my_putchar(str[a]);
      a = a + 1;
    }
  return (0);
}
