/*
** main.c for emacs in /home/Victor/Mathematique
** 
** Made by Victor Zhu
** Login   <Victor@epitech.net>
** 
** Started on  Fri Feb 24 14:31:51 2017 Victor Zhu
** Last update Thu Mar  2 15:47:55 2017 Victor Zhu
*/


#include "my.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int		*fill_poly(char *str, int len)
{
  int		i = 0;
  int		n = 0;
  int		*poly;
  int		signal;

  signal = 0;
  if ((poly = malloc(sizeof(int) * len)) == NULL)
    {
      my_putstr_error("error malloc\n");
      exit(84);
    }
  poly[n] = 0;
  while (str[i])
    {
      if (str[i] == '-')
	signal = 1;
      else if (str[i] >= '0' && str[i] <= '9')
	poly[n] = poly[n] * 10 + (str[i] - 48);
      if (str[i] == '*')
	{
	  if (signal == 1)
	    poly[n] = poly[n] * -1;
	  n = n + 1;
	  poly[n] = 0;
	  signal = 0;
	}
      i = i + 1;
    }
  return (poly);
}

double		calculate_polynome(int *poly, double step, int len)
{
  int		i = 0;
  int		power = 0;
  double	result = 0.0;

  while (i < len)
    {
      result = result + (poly[i] * pow(step, power));
      i = i + 1;
      power = power + 1;
    }
  return (result);
}

void	aff_step(int ent_step)
{
  double	step = 0.0;

  step = ent_step / 1000.0;
  if ((ent_step % 1000) == 0)
    printf("%.0f", step);
  else if ((ent_step % 100) == 0)
    printf("%.1f", step);
  else if ((ent_step % 10) == 0)
    printf("%.2f", step);
  else
    printf("%.3f", step);
}

int		play(int ac, char **av)
{
  int		step = 0;
  double	pow_step = 0.0;
  double	result_first;
  double	result_second;
  double	result_third;
  double	result_fourth;
  double	result;
  double	result_two;
  int		*first;
  int		*second;
  int		*third;
  int		*fourth;
  int		z;
  int		j;
  int		k;

  first = fill_poly(av[1], my_strlen(av[1]) / 2 + 1);  
  second = fill_poly(av[2], my_strlen(av[2]) / 2 + 1);
  while (step <= 1000)
    {
      pow_step = step / 1000.0;
      z = ac;
      j = ac - 2;
      k = ac - 1;
      result_first = calculate_polynome(first, pow_step, my_strlen(av[1]) / 2 + 1);
      if ((result_second = calculate_polynome(second, pow_step, my_strlen(av[2]) / 2 + 1)) == 0)
	{
	  my_putstr_error("error: divide by zero\n");
	  exit(84);
	}
      aff_step(step);
      result = result_first / result_second;
      while (z != 3)
	{
	  third = fill_poly(av[j], my_strlen(av[j]) / 2 + 1);
	  fourth = fill_poly(av[k], my_strlen(av[k]) / 2 + 1);
	  result_third = calculate_polynome(third, pow_step, my_strlen(av[j]) / 2 + 1);
	  if ((result_fourth = calculate_polynome(fourth, pow_step, my_strlen(av[k]) / 2 + 1)) == 0)
	    {
	      //my_putstr_error("error: divide by zero\n");
	      exit(84);
	    }
	  result_two = result_third / result_fourth;
	  result = result * result_two;
	  j = j - 2;
	  k = k - 2;
	  z = z - 2;
	}
      printf(" -> %.5f\n", result);
      step = step + 1;
    }
  return (0);
}

int		main(int ac, char **av)
{
  int		step = 0;
  double	pow_step = 0.0;
  int		check;
  double	result_first;
  double	result_second;
  double	result;
  int		*first;
  int		*second;

  if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h')
    return (display_man());
  if ((check = check_error(ac, av)) == 84)
    return (84);
  if ( ac == 3)
    {
      first = fill_poly(av[1], my_strlen(av[1]) / 2 + 1);  
      second = fill_poly(av[2], my_strlen(av[2]) / 2 + 1);
      while (step <= 1000)
	{
	  pow_step = step / 1000.0;
	  result_first = calculate_polynome(first, pow_step, my_strlen(av[1]) / 2 + 1);
	  if ((result_second = calculate_polynome(second, pow_step, my_strlen(av[2]) / 2 + 1)) == 0)
	    {
	      my_putstr_error("error: divide by zero\n");
	      exit(84);
	    }
	  aff_step(step);
	  result = result_first / result_second;
	  printf(" -> %.5f\n", result);
	  step = step + 1;      
	}
    }
  else
    play(ac, av);
  return (0);
}
