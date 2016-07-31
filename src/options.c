/*
** options.c for  in /home/bertha_e/rendu/Synthse/palindrome/src
** 
** Made by Berthaud Elodie
** Login   <bertha_e@epitech.net>
** 
** Started on  Thu Jun 16 18:21:42 2016 Berthaud Elodie
** Last update Sat Jun 18 13:20:23 2016 Berthaud Elodie
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "palindrome.h"

int	n_opt(t_pal *pal)
{
  if (pal->base != 10)
    {
      if (check_end(get_int(pal->pal)) == 1)
	return (1);
      pal->nb = convert_in_base(pal->nb, pal->base);
      b_treatment_n(pal);
    }
  else
    {
      if ((n_opt_comb(pal)) == 1)
	return (1);
    }
  return (0);
}

int	p_opt(t_pal *pal)
{
  char	*str_pal;
  int	nbr;
  int	p;
  int	p2;

  if ((str_pal = get_int(pal->pal)) == NULL)
    return (1);
  nbr = 0;
  p = 0;
  p2 = 0;
  if (pal->base != 10)
    {
      if (check_end(get_int(pal->pal)) == 1)
	return (1);
      pal->nb = convert_in_base(pal->pal, pal->base);
      b_treatment(pal, nbr, p, p2);
    }
  else
    {
      if ((check_end(str_pal)) == 1)
	return (1);
      if ((p_opt_comb(pal, nbr, p, p2)) == 1)
	return (1);
    }
  return (0);
}

int	b_treatment(t_pal *pal, int nbr, int p, int p2)
{
  while (convert_in_base(nbr++, pal->base) <= pal->pal)
    {
      pal->p_opt = convert_in_base(nbr, pal->base);
      while (pal->p_opt != pal->pal && p != 1)
	{
	  if (pal->p_opt > pal->pal)
	    p = 1;
	  pal->p_opt =  pal->p_opt + (atoi(revstr(get_int(pal->p_opt))));
	  pal->iter++;
	}
      if ((pal->iter <= pal->imax && pal->iter >= pal->imin) && p != 1)
	{
	  pal->p_opt = convert_in_base(nbr, pal->base);
	  check_valid_pal_base(p, pal);
	  p2++;
	}
      pal->iter = 0;
      p = 0;
    }
  if ((no_pal(p2)) == 1)
    return (1);
  return (0);
}

int	b_treatment_n(t_pal *pal)
{
  int	save;
  char	*conv;
  char	*rev;

  save = 0;
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
  if ((print_base_opt_n(pal)) == 1)
    return (1);
  return (0);
}
