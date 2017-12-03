/*
** my_square_root.c for my_square_root.c in /home/gwitrand/Projects/Piscine/j05
**
** Made by Witrand Gaspard
** Login   <gwitrand@epitech.net>
**
** Started on  Fri Oct  7 09:53:42 2016 Witrand Gaspard
** Last update Mon Oct 10 21:42:32 2016 Witrand Gaspard
*/

int	my_square_root(int nb)
{
  int	i;
  int	comt;

  comt = 0;
  i = 0;
  while (comt < nb)
    {
      i = i + 1;
      comt = i * i;
    }
  if (comt == nb)
    return (i);
  if (comt > nb)
    return (0);
}
