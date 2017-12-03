/*
** my_strlen.c for my_strlen.c in /home/gwitrand/Projects/Piscine/j07/lib/my
**
** Made by Witrand Gaspard
** Login   <gwitrand@epitech.net>
**
** Started on  Sun Oct  9 15:25:42 2016 Witrand Gaspard
** Last update Sun Oct  9 15:26:43 2016 Witrand Gaspard
*/

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      i = i + 1;
    }
  return (i);
}
