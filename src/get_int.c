/*
** get_int.c for  in /home/bertha_e/rendu/Synthse/palindrome/src
** 
** Made by Berthaud Elodie
** Login   <bertha_e@epitech.net>
** 
** Started on  Thu Jun 16 11:46:57 2016 Berthaud Elodie
** Last update Fri Jun 17 11:29:20 2016 Berthaud Elodie
*/

#include <stdlib.h>
#include <stdio.h>
#include "palindrome.h"

char	*get_int(int nb)
{
  int	len;
  char	*pal;

  len = my_int_len(nb);
  if ((pal = malloc(sizeof(char) * (len + 1))) == NULL)
    return (NULL);
  sprintf(pal, "%d", nb);
  return (pal);
}
