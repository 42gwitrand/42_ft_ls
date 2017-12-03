/*
** my_strcmp.c for my_strcmp.c in /home/gwitrand/Projects/Piscine/j06
**
** Made by Witrand Gaspard
** Login   <gwitrand@epitech.net>
**
** Started on  Mon Oct 10 09:45:54 2016 Witrand Gaspard
** Last update Tue Oct 11 18:24:32 2016 Witrand Gaspard
*/

int		my_strcmp(char *s1, char *s2)
{
  while (*s1 || *s2)
    {
      if (*s1 != *s2)
	return (*s1 - *s2);
      s1 = s1 + 1;
      s2 = s2 + 1;
    }
  return (0);
}
