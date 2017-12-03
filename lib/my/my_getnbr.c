/*
** my_getnbr.c for my_getnbr.c in /home/gwitrand/Projects/Piscine/j07/lib/my
**
** Made by Witrand Gaspard
** Login   <gwitrand@epitech.net>
**
** Started on  Tue Oct 11 22:49:05 2016 Witrand Gaspard
** Last update Tue Oct 11 23:05:30 2016 Witrand Gaspard
*/

#include <stdlib.h>

long	my_getnbr(char *str)
{
  long	total;

  total = 0;
  if (str != NULL && str[0] == '-')
    {
      return (- my_getnbr(&str[1]));
    }
  while ((*str >= '0') && (*str <= '9'))
    {
      total = (total * 10) + (*str - '0');
      str = str + 1;
    }
  return (total);
}
