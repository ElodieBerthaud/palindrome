/*
** fill_with_opt.c for  in /home/bertha_e/rendu/Synthse/palindrome/src
** 
** Made by Berthaud Elodie
** Login   <bertha_e@epitech.net>
** 
** Started on  Thu Jun 16 19:09:59 2016 Berthaud Elodie
** Last update Sat Jun 18 12:32:35 2016 Berthaud Elodie
*/

#include <stdio.h>
#include "../include/palindrome.h"

t_pal		*fill_n(int nb, t_pal *pal)
{
  if (nb < 0)
    {
      my_putstr_error("Error: invalid number (nb >= 0)\n");
      return (NULL);
    }
  pal->iter = 0;
  pal->nb = nb;
  pal->base = 10;
  pal->imax = 100;
  pal->imin = 0;
  return (pal);
}

t_pal		*fill_p(int nb, t_pal *pal)
{
  if (nb < 0)
    {
      my_putstr_error("Error: invalid number (nb >= 0)\n");
      return (NULL);
    }
  pal->iter = 0;
  pal->pal = nb;
  pal->imax = 100;
  pal->base = 10;
  pal->imin = 0;
  return (pal);
}

t_pal		*fill_b(int base, t_pal *pal)
{
  if ((base == 1))
    return (NULL);
  pal->base = base;
  pal->pal = convert_in_base(pal->pal, pal->base);
  return (pal);
}

t_pal		*fill_imin(int min, t_pal *pal)
{
  pal->imin = min;
  return (pal);
}

t_pal		*fill_imax(int max, t_pal *pal)
{
  pal->imax = max;
  return (pal);
}
