/*
** my_strcmp.c for emacs in /home/Victor/CPool_Day06
** 
** Made by Victor Zhu
** Login   <Victor@epitech.net>
** 
** Started on  Mon Oct 10 19:17:50 2016 Victor Zhu
** Last update Mon Feb 20 13:08:48 2017 Victor Zhu
*/

int	my_strcmp(char *s1, char *s2)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (s1[i] != '\0' && s2[j] != '\0')
    {
      if (s1[i] == s2[j])
	{
	  i = i + 1;
	  j = j + 1;
	}
      else
	return (84);
    }
  if (s1[i] == '\0' && s2[j] == '\0')
    return (0);
  return (84);
}
