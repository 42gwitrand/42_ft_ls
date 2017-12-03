/*
** my_putstr.c for my_putstr.c in /home/gwitrand/Projects/Piscine/j07/lib/my
**
** Made by Witrand Gaspard
** Login   <gwitrand@epitech.net>
**
** Started on  Sun Oct  9 15:23:47 2016 Witrand Gaspard
** Last update Wed Oct 12 17:48:34 2016 Witrand Gaspard
*/

#include "include/lib.h"

my_putstr_error(char *str)
{
   int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar_error(str[i]);
      i = i + 1;
    }
  return (0);
}

int	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
  return (0);
}
