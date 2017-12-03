/*
** my_strupcase.c for my_strupcase.c in /home/gwitrand/Projects/Piscine/j06
**
** Made by Witrand Gaspard
** Login   <gwitrand@epitech.net>
**
** Started on  Mon Oct 10 09:52:12 2016 Witrand Gaspard
** Last update Mon Oct 10 10:18:33 2016 Witrand Gaspard
*/

char	*my_strupcase(char *str)
{
  int	i;

  i  = 0;
  while (str[i] != '\0')
    {
      if (str[i] >= 'a' && str[i] <= 'z')
	str[i] = str[i] - 32;
      i = i + 1;
    }
  return (str);
}
