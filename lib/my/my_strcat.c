/*
** my_strcat.c for my_strcat.c in /home/gwitrand/Projects/Piscine/j07
**
** Made by Witrand Gaspard
** Login   <gwitrand@epitech.net>
**
** Started on  Sun Oct  9 15:46:04 2016 Witrand Gaspard
** Last update Sun Oct  9 15:54:13 2016 Witrand Gaspard
*/

char	*my_strcat(char *dest, char *src)
{
  int	i;
  int	k;

  i = 0;
  k = 0;
  while (dest[i] != '\0')
    {
      i = i + 1;
    }
  while (src[k] != '\0')
    {
      dest[i] = src[k];
      i = i + 1;
      k = k + 1;
    }
  dest[i] = '\0';
  return (dest);
}
