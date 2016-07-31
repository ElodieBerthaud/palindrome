/*
** puissance.c for  in /home/bertha_e/rendu/Synthse/palindrome/src
** 
** Made by Berthaud Elodie
** Login   <bertha_e@epitech.net>
** 
** Started on  Sat Jun 18 10:04:55 2016 Berthaud Elodie
** Last update Sat Jun 18 10:52:02 2016 Berthaud Elodie
*/

#include "palindrome.h"

int	puissance(int nb, int exp)
{
  int	i;
  int	res;

  i = 0;
  res = 0;
  if (exp == 0)
    return (1);
  if (exp == 1)
    return (nb);
  while (i <= (exp - 2))
    {
      res = res * nb;
      if (i == 0)
	res = nb * nb;
      i++;
    }
  return (res);
}

