/*
** my_strlowcase.c for my_strlowcase.c in /home/gwitrand/Projects/Piscine/j06
**
** Made by Witrand Gaspard
** Login   <gwitrand@epitech.net>
**
** Started on  Mon Oct 10 10:17:50 2016 Witrand Gaspard
** Last update Tue Oct 11 22:33:14 2016 Witrand Gaspard
*/

char	*my_strlowcase(char *str)
{
  int	i;

  i  = 0;
  while (str[i] != '\0')
    {
      if (str[i] >= 'A' && str[i] <= 'Z')
	str[i] = str[i] + 32;
      i = i + 1;
    }
  return (str);
}
