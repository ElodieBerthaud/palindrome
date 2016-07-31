/*
** check.c for  in /home/bertha_e/rendu/Synthse/palindrome/src
** 
** Made by Berthaud Elodie
** Login   <bertha_e@epitech.net>
** 
** Started on  Thu Jun 16 22:28:27 2016 Berthaud Elodie
** Last update Sat Jun 18 13:21:41 2016 Berthaud Elodie
*/

#include <string.h>
#include <stdio.h>
#include "palindrome.h"

int	check_end(char *rev)
{
  int	i;
  int	x;

  i = 0;
  x = strlen(rev) - 1;
  while (rev[i] != '\0')
    {
      if (rev[i] != rev[x])
	return (1);
      i++;
      x--;
    }
  return (0);
}

int	check_valid_pal(int p, t_pal *pal)
{
  if (p != 1)
    print_p_opt(pal);
  return (0);
}

int	check_valid_pal_base(int p, t_pal *pal)
{
  if (p != 1)
    print_base_opt(pal);
  return (0);
}

int	no_pal(int p)
{
  if (p == 0)
    {
      my_putstr_error("no solution\n");
      return (1);
    }
  return (0);
}
