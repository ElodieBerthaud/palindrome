/*
** my_putstr_error.c for  in /home/bertha_e/rendu/Synthse/palindrome/src
** 
** Made by Berthaud Elodie
** Login   <bertha_e@epitech.net>
** 
** Started on  Thu Jun 16 19:58:05 2016 Berthaud Elodie
** Last update Thu Jun 16 20:43:10 2016 Berthaud Elodie
*/

#include <string.h>
#include <unistd.h>

int	my_putstr_error(char *str)
{
  write(2, str, strlen(str));
  return (0);
}
