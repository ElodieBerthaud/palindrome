/*
** fill_struct.c for  in /home/bertha_e/rendu/Synthse/palindrome/src
** 
** Made by Berthaud Elodie
** Login   <bertha_e@epitech.net>
** 
** Started on  Thu Jun 16 19:00:10 2016 Berthaud Elodie
** Last update Sat Jun 18 13:05:53 2016 Berthaud Elodie
*/

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "../include/palindrome.h"

t_pal		*get_opt(char *opt, t_pal *pal)
{
  int		i;

  i = 0;
  while (pal->opt[i])
    i++;
  if ((pal->opt = realloc(pal->opt, sizeof(char *) * (i + 2))) == NULL)
      return (NULL);
  pal->opt[i] = my_strdup(opt);
  pal->opt[i + 1] = NULL;
  return (pal);
}

t_pal		*check_opt(char *opt, char **av, t_pal *pal, int pos)
{
  pal = get_opt(opt, pal);
  if ((strcmp(opt, "-n")) == 0)
    if ((pal = fill_n(atoi(av[pos + 1]), pal)) == NULL)
      return (NULL);
  if ((strcmp(opt, "-p")) == 0)
    if ((pal = fill_p(atoi(av[pos + 1]), pal)) == NULL)
      return (NULL);
  if ((strcmp(opt, "-b")) == 0)
    if ((pal = fill_b(atoi(av[pos + 1]), pal)) == NULL)
      return (NULL);
  if ((strcmp(opt, "-imin")) == 0)
      pal = fill_imin(atoi(av[pos + 1]), pal);
  if ((strcmp(opt, "-imax")) == 0)
      pal = fill_imax(atoi(av[pos + 1]), pal);
  return (pal);
}

t_pal		*fill_struct(char **av)
{
  t_pal		*pal;
  int		i;
  int		x;
  char		**opt;

  i = -1;
  x = 0;
  opt = tab_opt();
  if ((pal = malloc(sizeof(t_pal))) == NULL)
    return (NULL);
  if ((pal->opt = malloc(sizeof(char *) * 2)) == NULL)
    return (NULL);
  pal->opt[0] = NULL;
  while (av[++i])
    {
      while (opt[x])
	{
	  if ((strcmp(av[i], opt[x])) == 0)
	    if ((pal = check_opt(opt[x], av, pal, i)) == NULL)
	      return (NULL);
	  x++;
	}
      x = 0;
    }
  return (pal);
}
