/*
** my_strcapitalize.c for my_strcapitalize.c in /home/gwitrand/Projects/Piscine/j06
**
** Made by Witrand Gaspard
** Login   <gwitrand@epitech.net>
**
** Started on  Mon Oct 10 10:19:58 2016 Witrand Gaspard
** Last update Fri Oct 14 09:15:50 2016 Witrand Gaspard
*/

#include "include/lib.h"

char	*my_strcapitalize(char *str)
{
  int	place;

  place = 1;
  my_strlowcase(str);
  if (str[0] >= 'a' && str[0] <= 'z')
    str[0] = str[0] - 'a' + 'A';
  while (str[place] != '\0')
    {
      if ((str[place] >= ' ' && str[place] <= '/') ||
	  (str[place] >= ':' && str[place] <= '@'))
	if (str[place + 1] >= 'a' && str[place + 1] <= 'z')
	  str[place + 1] = str[place + 1] - 'a' + 'A';
      place = place + 1;
    }
  return (str);
}
