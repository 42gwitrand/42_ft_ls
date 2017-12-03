/*
** my_str_isupper.c for my_str_isupper.c in /home/gwitrand/Projects/Piscine/j06
**
** Made by Witrand Gaspard
** Login   <gwitrand@epitech.net>
**
** Started on  Mon Oct 10 11:37:09 2016 Witrand Gaspard
** Last update Mon Oct 10 11:37:39 2016 Witrand Gaspard
*/

int		my_str_isupper(char *str)
{
  while (str[0] != '\0')
    {
      if (str[0] == '\0')
	return (1);
      if (!(str[0] >= 'A' && str[0] <= 'Z'))
	return (0);
      str = str + 1;
    }
  return (1);
}
