/*
** pong.c for emacs in /home/Victor/101pong
** 
** Made by Victor Zhu
** Login   <Victor@epitech.net>
** 
** Started on  Mon Nov  7 15:15:23 2016 Victor Zhu
** Last update Wed Nov 16 13:19:05 2016 Victor Zhu
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>
#include "include/pong.h"

int	aff_angle(float result,char **av, float Avz)
{
  float	z1;
  float	z2;

  z1 = atof(av[3]);
  z2 = atof(av[6]);
  if (result > 89.999 || result < 0.001)
    {
      printf("The ball won't reach the bat.\n");
      return (0);
    }
  else if (z1 < 0 && z2 < 0 && Avz > 0 ||
      z1 > 0 && z2 > 0 && Avz < 0)
    {
      printf("The incidence angle is :\n");
      printf("%.2f degrees\n", result);
      return (0);
    }
  else
    {
      printf("The ball won't reach the bat.\n");
      return (0);
    }
}

int	angle(char **av, float Avx, float Avy, float Avz)
{
  float	x;
  float	x1;
  float	x2;
  float	x3;
  float	y;
  float	result;
  float	scal;

  x1 = atof(av[4]) - atof(av[1]);
  x2 = atof(av[5]) - atof(av[2]);
  x3 = atof(av[6]) - atof(av[3]);
  x = sqrt((x1 * x1) + (x2 * x2) + (x3 * x3));
  if (x3 > 0)
    y = (x3 / x);
  else if (x3 < 0)
    y = ((-x3) / x);
  result = (asin(y)) * (180/M_PI);
  if (result < 0)
    {
      my_putstr(ERROR_MSG);
      return (84);
    }
  aff_angle(result, av, Avz);
  return (0);
}

int	time(char **av, float Vx, float Vy, float Vz)
{
  int	i;
  int	n;
  float	Avx;
  float	Avy;
  float	Avz;

  i = 0;
  n = 0;
  while (av[7][i] != '\0')
    {
      n = (n * 10) + (av[7][i] - '0');
      i = i + 1;
    }
  Avx = (Vx * n) + atof(av[4]);
  Avy = (Vy * n) + atof(av[5]);
  Avz = (Vz * n) + atof(av[6]);
  printf("At time t+%d, ball coordinates will be :\n");
  printf("(%.2f;%.2f;%.2f)\n", Avx, Avy, Avz);
  angle(av, Avx, Avy, Avz);
  return (0);
}

int	debut(char **av)
{
  float	Vx;
  float	Vy;
  float	Vz;

  Vx = atof(av[4]) - atof(av[1]);
  Vy = atof(av[5]) - atof(av[2]);
  Vz = atof(av[6]) - atof(av[3]);
  printf("The speed vector coordinates are :\n");
  printf("(%.2f;%.2f;%.2f)\n", Vx, Vy, Vz);
  time(av, Vx, Vy, Vz);
  return (0);
}
