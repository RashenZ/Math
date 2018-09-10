/*
** help.c for emacs in /home/Victor/Mathematique/108trigo
** 
** Made by Victor Zhu
** Login   <Victor@epitech.net>
** 
** Started on  Mon Mar  6 13:00:15 2017 Victor Zhu
** Last update Mon Mar  6 13:24:36 2017 Victor Zhu
*/

#include "my.h"

int	man_help()
{
  my_putstr("USAGE\n\t./108trigo fun a0 a1 a2...\n");
  my_putstr("DESCRIPTION\n\tfun   function to be applied, at least");
  my_putstr("\"EXP\",\"COS\",\"SIN\",\"COSH\" and \"SIN\"\n");
  my_putstr("\tai   coeficients of the matrix\n");
  return (0);
}
