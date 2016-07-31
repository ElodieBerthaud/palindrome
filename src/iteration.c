/*
** iteration.c for  in /home/bertha_e/rendu/Synthse/palindrome/src
** 
** Made by Berthaud Elodie
** Login   <bertha_e@epitech.net>
** 
** Started on  Thu Jun 16 11:46:40 2016 Berthaud Elodie
** Last update Thu Jun 16 18:46:40 2016 Berthaud Elodie
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "palindrome.h"

int	iteration(int nb, int palin)
{
  int	i;
  char	*pal;
  char	*rev;

  if ((pal = get_int(palin)) == NULL)
    return (1);
  rev = revstr(pal);
  i = 0;
  while ((strcmp(revstr(get_int(nb)), rev)) != 0)
    {
      if (nb > palin)
	return (1);
      printf("%d\n", nb);
      nb = (nb + atoi(revstr(get_int(nb))));
      i++;
    }
  printf("%d iteration\n", i);
  return (i);
}
