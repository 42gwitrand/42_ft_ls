/*
** my_find_prime_sup.c for my_find_prime_sup.c in /home/gwitrand/Projects/Piscine/j05
**
** Made by Witrand Gaspard
** Login   <gwitrand@epitech.net>
**
** Started on  Fri Oct  7 10:03:28 2016 Witrand Gaspard
** Last update Mon Oct 10 21:40:33 2016 Witrand Gaspard
*/

int	calc(int nb, int num)
{
  if (!(nb % num) && num == nb)
    return (1);
  if ((num > nb) && (nb % num))
    return (calc(nb, num + 1));
  return (0);
}

int	my_find_prime_sup(int	nb)
{
  if (nb < 3)
    return (2);
  if (!(calc(nb, 2)))
    return (my_find_prime_sup(nb + 1));
  return (nb);
}
