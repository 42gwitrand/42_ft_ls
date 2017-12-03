/*
** my_str_isprintable.c for my_str_isprintable.c in /home/gwitrand/Projects/Piscine/j06
**
** Made by Witrand Gaspard
** Login   <gwitrand@epitech.net>
**
** Started on  Mon Oct 10 11:40:39 2016 Witrand Gaspard
** Last update Tue Oct 11 19:23:57 2016 Witrand Gaspard
*/

int		my_str_isprintable(char *str)
{
  while (str[0] != '\0')
    {
      if (!((str[0] >= 32 && str[0] <= 126)))
	return (0);
      str = str + 1;
    }
  return (1);
}
