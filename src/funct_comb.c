/*
** funct_comb.c for  in /home/bertha_e/rendu/Synthse/palindrome/src
** 
** Made by Berthaud Elodie
** Login   <bertha_e@epitech.net>
** 
** Started on  Fri Jun 17 11:53:42 2016 Berthaud Elodie
** Last update Sat Jun 18 13:23:28 2016 Berthaud Elodie
*/

#include <stdlib.h>
#include <stdio.h>
#include "palindrome.h"

int	p_opt_comb(t_pal *pal, int nbr, int p, int p2)
{
  while (nbr++ <= pal->pal)
    {
      pal->p_opt = nbr;
      while (pal->p_opt != pal->pal && p != 1)
	{
	  if (pal->p_opt > pal->pal)
	    p = 1;
	  pal->p_opt =  pal->p_opt + (atoi(revstr(get_int(pal->p_opt))));
	  pal->iter++;
	}
      if ((pal->iter <= pal->imax && pal->iter >= pal->imin) && p != 1)
	{
	  pal->p_opt = nbr;
	  check_valid_pal(p, pal);
	  p2++;
	}
      pal->iter = 0;
      p = 0;
    }
  if ((no_pal(p2)) == 1)
    return (1);
  return (0);
}

int	n_opt_comb(t_pal *pal)
{
  int	save;
  char	*conv;
  char	*rev;

  if ((conv = get_int(pal->nb)) == NULL)
    return (1);
  rev = revstr(conv);
  save = pal->nb;
  while (check_end(conv) != 0)
    {
      rev = (revstr(conv = get_int(pal->nb)));
      pal->nb = (pal->nb + atoi(revstr(get_int(pal->nb))));
      pal->iter++;
    }
  pal->nb = save;
  if (pal->iter != 0)
    pal->iter = pal->iter - 1;
  pal->end = atoi(rev);
  if ((print_n_opt(pal)) == 1)
    return (1);
  return (0);
}
