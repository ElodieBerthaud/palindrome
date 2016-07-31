/*
** main.c for  in /home/bertha_e/rendu/Synthse/palindrome/src
** 
** Made by Berthaud Elodie
** Login   <bertha_e@epitech.net>
** 
** Started on  Thu Jun 16 09:13:50 2016 Berthaud Elodie
** Last update Sat Jun 18 13:35:38 2016 Berthaud Elodie
*/

#include <stdio.h>
#include <stdlib.h>
#include "palindrome.h"

int	main(int ac, char **av)
{
  t_pal	*pal;
  int	i;

  i = 0;
  if (ac == 1)
    {
      my_putstr_error("Usage: ./palindrome -n number -p palindrome ");
      my_putstr_error("[-b base] [-imin i] [-imax i]\n");
      return (84);
    }
  else if (check_valid_opt1(av) == 1 && sent_args(av, ac) == 1)
    return (84);
  if ((pal = malloc(sizeof(t_pal))) == NULL)
    return (84);
  if ((pal = fill_struct(av)) == NULL)
    return (84);
  while (pal->opt[i])
    {
      if ((tab_functions(pal->opt[i], pal)) == 1)
	return (84);
      i++;
    }
  return (0);
}
