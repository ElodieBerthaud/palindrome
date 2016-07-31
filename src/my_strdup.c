/*
** my_strdup.c for  in /home/bertha_e/rendu/Synthse/jour1/SBMLparser/src
** 
** Made by Berthaud Elodie
** Login   <bertha_e@epitech.net>
** 
** Started on  Wed Jun 15 12:10:56 2016 Berthaud Elodie
** Last update Thu Jun 16 19:45:09 2016 Berthaud Elodie
*/

#include <stdlib.h>
#include <string.h>
#include "../include/palindrome.h"

char    *my_strdup(char *str)
{
  int   i;
  int   j;
  char  *strcpy;

  i = strlen(str) + 1;
  j = -1;
  if ((strcpy = malloc(i * sizeof(char))) == NULL)
    return (NULL);
  while (str != NULL && str[++j] != '\0')
    strcpy[j] = str[j];
  strcpy[j] = '\0';
  return (strcpy);
}
