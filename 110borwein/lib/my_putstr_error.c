/*
** my_putstr_error.c for emacs in /home/Victor/CPool_workshoplib/lib/my
** 
** Made by Victor Zhu
** Login   <Victor@epitech.net>
** 
** Started on  Sun Dec 25 11:37:07 2016 Victor Zhu
** Last update Mon Apr  3 07:33:54 2017 Victor Zhu
*/

#include <unistd.h>
#include <stdlib.h>
#include "my.h"

void	my_putstr_error(char *str)
{
  write(2, str, my_strlen(str));
  exit(84);
}
