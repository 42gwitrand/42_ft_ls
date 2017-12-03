/*
** my_str_islower.c for my_str_islower.c in /home/gwitrand/Projects/Piscine/j06
**
** Made by Witrand Gaspard
** Login   <gwitrand@epitech.net>
**
** Started on  Mon Oct 10 11:35:14 2016 Witrand Gaspard
** Last update Mon Oct 10 11:35:42 2016 Witrand Gaspard
*/

int		my_str_islower(char *str)
{
  while (str[0] != '\0')
    {
      if (str[0] == '\0')
	return (1);
      if (!(str[0] >= 'a' && str[0] <= 'z'))
	return (0);
      str = str + 1;
    }
  return (1);
}
