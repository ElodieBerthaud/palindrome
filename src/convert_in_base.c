/*
** convert_in_base.c for  in /home/bertha_e/rendu/Synthse/palindrome/src
** 
** Made by Berthaud Elodie
** Login   <bertha_e@epitech.net>
** 
** Started on  Fri Jun 17 17:37:41 2016 Berthaud Elodie
** Last update Sat Jun 18 13:02:30 2016 Berthaud Elodie
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "palindrome.h"

int	convert_in_base(int nb, int base)
{
  int	stk;

  stk = nb;
  if (nb > 0)
    {
      stk = convert_in_base(nb / base, base);
      stk = stk * 10 + (nb % base);
    }
  return (stk);
}

int	get_from_base(int nb, int base)
{
  char	*get;
  int	i;
  int	x;
  int	res;

  i = 0;
  res = 0;
  if ((get = malloc(sizeof(char) * (my_int_len(nb) + 1))) == NULL)
    return (0);
  get = get_int(nb);
  res = 0;
  x = strlen(get) - 1;
  while (get[i])
    {
      res = res + ((get[i] - 48) * puissance(base, x));
      i++;
      x--;
    }
  return (res);
}
