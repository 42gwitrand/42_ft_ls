/*
** my_strncmp.c for my_strncmp.c in /home/gwitrand/Projects/Piscine/j06
**
** Made by Witrand Gaspard
** Login   <gwitrand@epitech.net>
**
** Started on  Mon Oct 10 09:51:22 2016 Witrand Gaspard
** Last update Wed Oct 12 13:41:33 2016 Witrand Gaspard
*/

int		my_strncmp(char *s1, char *s2, int n)
{
  unsigned int	i;

  i = 0;
  while ((*s1 || *s2) && (i < n))
    {
      if (*s1 != *s2)
	return (*s1 - *s2);
      s1 = s1 + 1;
      s2 = s2 + 1;
      i = i + 1;
    }
  return (0);
}
