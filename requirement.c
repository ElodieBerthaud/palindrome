/*
** requirement.c for  in /home/bertha_e/rendu/Synthse/palindrome
** 
** Made by Berthaud Elodie
** Login   <bertha_e@epitech.net>
** 
** Started on  Thu Jun 16 09:17:59 2016 Berthaud Elodie
** Last update Fri Jun 17 21:37:52 2016 Berthaud Elodie
*/

#include <stdio.h>
#include <stdlib.h>

int	my_factrec_synthesis(int nb)
{
  static int	res = 1;
  static int	i = 1;

  if (nb < 0 || nb > 12)
    return (0);
  if (nb == 0 || nb == 1)
    return (res = 1);
  res = res * i;
  i++;
  if (i <= nb)
    my_factrec_synthesis(nb);
  else
    return (res);
}

int	my_squareroot_synthesis(int nb)
{
  int	cpt;
  int	res;

  cpt = 1;
  res = 0;
  if (nb < 0)
    return (-1);
  while (res != nb)
    {
      if (res > nb)
	return (-1);
      res = cpt * cpt;
      cpt++;
    }
  if (res == nb)
    return (cpt - 1);
}
