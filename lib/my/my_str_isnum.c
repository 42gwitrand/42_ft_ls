/*
** my_str_isnum.c for my_str_isnum.c in /home/gwitrand/Projects/Piscine/j06
**
** Made by Witrand Gaspard
** Login   <gwitrand@epitech.net>
**
** Started on  Mon Oct 10 11:36:09 2016 Witrand Gaspard
** Last update Mon Oct 10 11:36:38 2016 Witrand Gaspard
*/

int		my_str_isnum(char *str)
{
  while (str[0] != '\0')
    {
      if (str[0] == '\0')
	return (1);
      if (!((str[0] >= '0' && str[0] <= '9')))
	return (0);
      str = str + 1;
    }
  return (1);
}
