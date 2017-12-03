/*
** my_power_it.c for my_power_it.c in /home/gwitrand/Projects/Piscine/j05
**
** Made by Witrand Gaspard
** Login   <gwitrand@epitech.net>
**
** Started on  Fri Oct  7 09:15:12 2016 Witrand Gaspard
** Last update Mon Oct 10 21:41:48 2016 Witrand Gaspard
*/

int	my_power_it(int nb, int p)
{
  int	i;
  int	nbb;

  i = p;
  nbb = nb;
  if (nb == 0 && p != 0)
    return (0);
  if (p == 1)
    return (nb);
  if (p == 0)
    return (1);
  while (i > 0)
    {
      nbb = nbb * nb;
      i = i - 1;
      if (!(nbb <= 2147483647 && nb >= -2147483648))
	return (0);
    }
  return (nbb);
}
