/*
** my_strncpy.c for my_strncpy.c in /home/gwitrand/Projects/Piscine/j06
**
** Made by Witrand Gaspard
** Login   <gwitrand@epitech.net>
**
** Started on  Mon Oct 10 09:00:42 2016 Witrand Gaspard
** Last update Mon Oct 10 09:01:12 2016 Witrand Gaspard
*/

char	*my_strncpy(char *dest, char *src, int n)
{
  int	i;

  i = 0;
  while (src[i] != '\0' && n > 0)
    {
      dest[i] = src[i];
      n = n - 1;
      i = i + 1;
    }
  return (dest);
}
