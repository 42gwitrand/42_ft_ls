/*
** my_is_prime.c for my_is_prime.C in /home/gwitrand/Projects/Piscine/j05
**
** Made by Witrand Gaspard
** Login   <gwitrand@epitech.net>
**
** Started on  Fri Oct  7 09:58:13 2016 Witrand Gaspard
** Last update Mon Oct 10 21:41:18 2016 Witrand Gaspard
*/

int	my_is_prime(int nb)
{
  int	prime;

  prime = 3;
  if (-2 < nb && nb < 2)
    return (0);
  if (nb < 0)
    nb = (nb * -1);
  if (nb % 2 == 0)
    return (0);
  while (prime * prime <= nb)
    {
      if (nb % prime == 0)
	return (0);
      prime = prime + 1;
    }
  return (0);
}
