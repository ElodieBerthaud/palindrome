/*
** revstr.c for  in /home/bertha_e/rendu/Synthse/palindrome/src
** 
** Made by Berthaud Elodie
** Login   <bertha_e@epitech.net>
** 
** Started on  Thu Jun 16 11:52:27 2016 Berthaud Elodie
** Last update Thu Jun 16 22:48:15 2016 Berthaud Elodie
*/

#include <stdlib.h>
#include <string.h>
#include "palindrome.h"

char	*revstr(char *str)
{
  char	*rev;
  int	i;
  int	x;

  if ((rev = malloc(sizeof(char) * (strlen(str) + 1))) == NULL)
    return (NULL);
  i = strlen(str) - 1;
  x = 0;
  while (i >= 0)
    {
      rev[x] = str[i];
      i--;
      x++;
    }
  rev[x] = '\0';
  return (rev);
}
