/*
** my_putchar.c for emacs in /home/Victor/CPool_Day07/lib/my
** 
** Made by Victor Zhu
** Login   <Victor@epitech.net>
** 
** Started on  Tue Oct 11 15:25:15 2016 Victor Zhu
** Last update Mon Nov  7 11:20:18 2016 Victor Zhu
*/

#include <unistd.h>
#include <stdlib.h>
#include "../include/pong.h"

void	my_putchar(char c)
{
  write(1, &c, 1);
}
