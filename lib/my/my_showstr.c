/*
** my_showstr.c for my_showstr.c in /home/gwitrand/Projects/Piscine/j06
**
** Made by Witrand Gaspard
** Login   <gwitrand@epitech.net>
**
** Started on  Mon Oct 10 18:28:04 2016 Witrand Gaspard
** Last update Fri Oct 14 09:10:28 2016 Witrand Gaspard
*/

#include "include/lib.h"

int	my_str_isprintablechar(char str)
{
  if (!((str >= 32 && str <= 126)))
    return (0);
  else
    return (1);
}

int	printspe(char c)
{
  char	*str;

  if (c == '\0')
    str = "00";
  else if (c == '\a')
    str = "07";
  else if (c == '\b')
    str = "08";
  else if (c == '\t')
    str = "09";
  else if (c == '\n')
    str = "0a";
  else if (c == '\v')
    str = "0b";
  else if (c == '\f')
    str = "0c";
  else if (c == '\r')
    str = "0d";
  else if (c == '\e')
    str = "1b";
  else
    return (0);
  my_putchar('\\');
  my_putstr(str);
  return (0);
}

int	my_showstr(char *str)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (str[i])
    {
      j = my_str_isprintablechar(str[i]);
      if (j == 1)
	my_putchar(str[i]);
      else if (j == 0)
	printspe(str[i]);
      i = i + 1;
      j = 0;
    }
  return (0);
}
