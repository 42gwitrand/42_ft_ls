/*
** my_revstr.c for my_revstr.c in /home/gwitrand/Projects/Piscine/j06
**
** Made by Witrand Gaspard
** Login   <gwitrand@epitech.net>
**
** Started on  Mon Oct 10 09:34:34 2016 Witrand Gaspard
** Last update Fri Oct 14 09:08:57 2016 Witrand Gaspard
*/

#include "include/lib.h"

char	*my_revstr(char *str)
{
  int	a;
  int	b;
  char	trans;

  a = 0;
  b = (my_strlen(str) - 1);
  while (a < b)
    {
      trans = str[a];
      str[a] = str[b];
      str[b] = trans;
      a = a + 1;
      b = b - 1;
    }
  return (str);
}
