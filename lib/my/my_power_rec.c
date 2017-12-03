/*
** my_power_rec.c for my_power_rec.c in /home/gwitrand/Projects/Piscine/j05
**
** Made by Witrand Gaspard
** Login   <gwitrand@epitech.net>
**
** Started on  Fri Oct  7 09:50:13 2016 Witrand Gaspard
** Last update Mon Oct 10 21:42:05 2016 Witrand Gaspard
*/

int	my_power_rec(int nb, int p)
{
  if (p >= 2)
    {
      if (!(nb <= 2147483647 && nb >= 214748364))
	return (0);
      return (nb * my_power_rec(nb, p - 1));
    }
  if (p == 0)
    return (1);
  if (p < 0)
    {
      return (0);
    }
  else
    return (0);
}
