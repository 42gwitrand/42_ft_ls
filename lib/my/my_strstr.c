/*
** my_strstr.c for my_strstr.c in /home/gwitrand/Projects/Piscine/j06
**
** Made by Witrand Gaspard
** Login   <gwitrand@epitech.net>
**
** Started on  Mon Oct 10 09:37:46 2016 Witrand Gaspard
** Last update Tue Oct 11 12:55:41 2016 Witrand Gaspard
*/

#include <stdlib.h>

char	*my_strstr(char *str, char *to_find)
{
  int	i;
  int	pos;
  int	len;

  i = 0;
  pos = 0;
  len = 0;
  while (to_find[len] != '\0')
    len = len + 1;
  if (len == 0)
    return (str);
  while (str[i])
    {
      while (to_find[pos] == str[i + pos])
	{
	  if (pos == len - 1)
	    return (str + 1);
	  pos = pos + 1;
	}
      pos = 0;
      i = i + 1;
    }
  return (NULL);
}
