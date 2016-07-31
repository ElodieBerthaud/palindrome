/*
** tab_function.c for  in /home/bertha_e/rendu/Synthse/palindrome/src
** 
** Made by Berthaud Elodie
** Login   <bertha_e@epitech.net>
** 
** Started on  Thu Jun 16 18:16:20 2016 Berthaud Elodie
** Last update Fri Jul  1 11:15:46 2016 Berthaud Elodie
*/

#include <string.h>
#include <stdlib.h>
#include "palindrome.h"

int	tab_functions(char *opt, t_pal *pal)
{
  int	i;
  int	(*(funct[5]))(t_pal *);
  char	**is_opt;

  i = 0;
  if ((is_opt = tab_opt()) == NULL)
    return (1);
  funct[0] = n_opt;
  funct[1] = p_opt;
  funct[2] = b_opt;
  funct[3] = imax_opt;
  funct[4] = imin_opt;
  while (strcmp(opt, is_opt[i]) != 0)
    i++;
  if ((funct[i](pal)) == 1)
    return (1);
  return (0);
}
