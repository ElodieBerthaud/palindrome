/*
** error.c for  in /home/bertha_e/rendu/Synthse/palindrome/src
** 
** Made by Berthaud Elodie
** Login   <bertha_e@epitech.net>
** 
** Started on  Thu Jun 16 23:11:06 2016 Berthaud Elodie
** Last update Sat Jun 18 13:39:19 2016 Berthaud Elodie
*/

#include <stdlib.h>
#include <string.h>
#include "palindrome.h"

int	check_valid_opt1(char **av)
{
  int	i;
  int	chk;

  i = 0;
  chk = 0;
  while (av[i])
    {
      if ((strcmp(av[i], "-n") == 0) || (strcmp(av[i], "-p")) == 0)
	chk++;
      i++;
    }
  if (chk == 2)
    {
      my_putstr_error("Error: options -n and -n can't be set together\n");
      return (1);
    }
  else if (chk == 0)
    {
      my_putstr_error("invalid argument\n");
      return (1);
    }
  return (0);
}

int	sent_args(char **av, int ac)
{
  int	i;
  int	x;
  char	**tab;

  i = 1;
  x = 0;
  if ((tab = tab_opt()) == NULL)
    return (1);
  while (av[i])
    {
      while (tab[x])
	{
	  if (strcmp(av[i], tab[x]) == 0)
	    if (i == ac - 1)
	      return (1);
	  x++;
	}
      x = 0;
      i++;
    }
  return (0);
}
