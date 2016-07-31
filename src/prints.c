/*
** prints.c for  in /home/bertha_e/rendu/Synthse/palindrome/src
** 
** Made by Berthaud Elodie
** Login   <bertha_e@epitech.net>
** 
** Started on  Thu Jun 16 20:01:04 2016 Berthaud Elodie
** Last update Sat Jun 18 13:28:03 2016 Berthaud Elodie
*/

#include <stdio.h>
#include "palindrome.h"

int	print_n_opt(t_pal *pal)
{
  if (pal->iter <= pal->imax && pal->iter >= pal->imin)
    {
      printf("%d leads to %d in ", pal->nb, pal->end);
      printf("%d iteration(s) in base %d\n", pal->iter, pal->base);
    }
  else
    {
      my_putstr_error("no solution\n");
      return (1);
    }
  return (0);
}

int	print_p_opt(t_pal *pal)
{
  printf("%d leads to %d in %d iteration(s)", pal->p_opt, pal->pal, pal->iter);
  printf(" in base %d\n", pal->base);
  return (0);
}

int	print_base_opt(t_pal *pal)
{
  printf("%d leads to ", get_from_base(pal->p_opt, pal->base));
  printf("%d ", get_from_base(pal->pal, pal->base));
  printf("in %d iteration(s) ", pal->iter);
  printf("in base %d\n", pal->base);
  return (0);
}

int	print_base_opt_n(t_pal *pal)
{
  if (pal->iter <= pal->imax && pal->iter >= pal->imin)
    {
      printf("%d leads to ", get_from_base(pal->nb, pal->base));
      printf("%d ", get_from_base(pal->end, pal->base));
      printf("in %d iteration(s) ", pal->iter);
      printf("in base %d\n", pal->base);
    }
  else
    {
      my_putstr_error("no solution\n");
      return (1);
    }
  return (0);
}
