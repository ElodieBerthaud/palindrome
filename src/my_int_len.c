/*
** my_int_len.c for  in /home/bertha_e/rendu/Synthse/palindrome/src
** 
** Made by Berthaud Elodie
** Login   <bertha_e@epitech.net>
** 
** Started on  Thu Jun 16 11:26:29 2016 Berthaud Elodie
** Last update Thu Jun 16 12:08:58 2016 Berthaud Elodie
*/

#include "palindrome.h"

int	my_int_len(int nb)
{
  int	i;

  i = 0;
  while (nb != 0)
    {
      nb = nb / 10;
      i++;
    }
  return (i);
}
