/*
** main.c for emacs in /home/Victor/CPool_workshoplib/lib/my/usefull
** 
** Made by Victor Zhu
** Login   <Victor@epitech.net>
** 
** Started on  Mon Mar 20 14:41:43 2017 Victor Zhu
** Last update Wed Apr 12 13:58:04 2017 Victor Zhu
*/

#include "my.h"

double		interv_debut = 0;
double		interv_fin = 5000;
double		nbr_subdiv = 10000;

double		get_integrale(double x, double n)
{
  double	result;
  double	k = 0;

  result = 1;
  if (x == 0)
    return (result);
  while (k <= n)
    {
      result = result * (sin(x / (2 * k + 1)) / (x / (2 * k + 1)));
      k = k + 1;
    }
  return (result);
}

void		simpson_method(double n)
{
  double	first_result = 0;
  double	second_result = 0;
  double	result = 0;
  double	i = interv_debut;
  double	h = (interv_fin - interv_debut) / nbr_subdiv;
  double	diff;

  while (i < nbr_subdiv)
    {
      first_result = first_result +
	get_integrale((interv_debut + i * h) + (h / 2), n);
      i = i + 1;
    }
  i = 1;
  while (i < nbr_subdiv)
    {
      second_result = second_result +
	get_integrale(interv_debut + i * h, n);
      i = i + 1;
    }
  result = (h / 6) * (get_integrale(interv_debut, n) +
		      get_integrale(interv_fin, n) + (2 * second_result) +
		      (4 * first_result));
  printf("Simpson:\nI%.0lf = %.10lf\n", n, result);
  diff = result - M_PI / 2;
  if (n == 4)
    diff = 0;
  printf("diff = %.10lf\n", diff);
}

void		trapeze_method(double n)
{
  double	result = 0;
  double	i = interv_debut + 1;
  double	h = (interv_fin - interv_debut) / nbr_subdiv;
  double	diff;

  while (i < nbr_subdiv)
    {
      result = result + get_integrale(interv_debut + i * h, n);
      i = i + 1;
    }
  result = h / 2 * (get_integrale(interv_debut, n) +
		get_integrale(interv_fin, n) + 2 * result);
  printf("Trapezoids:\nI%.0lf = %.10lf\n", n, result);
  diff = result - M_PI / 2;
  if (n == 4)
    diff = 0;
  printf("diff = %.10lf\n\n", diff);
}

void		rectangles_method(double n)
{
  double	result = 0;
  double	i = interv_debut;
  double	diff;
  double	h = (interv_fin - interv_debut) / nbr_subdiv;

  while (i < nbr_subdiv)
    {
      result = result + get_integrale(interv_debut + i * h, n);
      i = i + 1;
    }
  result = result * h;
  printf("Rectangles:\nI%.0lf = %.10lf\n", n, result);
  diff = result - M_PI / 2;
  printf("diff = %.10lf\n\n", diff);
}

int		main(int ac, char **av)
{
  check_error(ac, av);
  rectangles_method(atoi(av[1]));
  trapeze_method(atoi(av[1]));
  simpson_method(atoi(av[1]));
  return (0);
}
