/*
** tab.c for  in /home/bertha_e/rendu/Synthse/palindrome/src
** 
** Made by Berthaud Elodie
** Login   <bertha_e@epitech.net>
** 
** Started on  Thu Jun 16 18:16:36 2016 Berthaud Elodie
** Last update Fri Jun 17 11:27:40 2016 Berthaud Elodie
*/

#include <stdlib.h>
#include "../include/palindrome.h"

char	**tab_opt()
{
  char	**tab;

  if ((tab = malloc(sizeof(char *) * 6)) == NULL)
    return (NULL);
  tab[0] = my_strdup("-n");
  tab[1] = my_strdup("-p");
  tab[2] = my_strdup("-b");
  tab[3] = my_strdup("-imax");
  tab[4] = my_strdup("-imin");
  tab[5] = NULL;
  return (tab);
}
