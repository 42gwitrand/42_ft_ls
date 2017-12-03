/*
** my_put_nbr.c for my_put_nbr.c in /home/gwitrand/Projects/Piscine/j07/lib/my
**
** Made by Witrand Gaspard
** Login   <gwitrand@epitech.net>
**
** Started on  Sun Oct  9 15:31:49 2016 Witrand Gaspard
** Last update Sun Oct  9 15:31:56 2016 Witrand Gaspard
*/

#include "include/lib.h"

int	my_put_nbr(int nb, int *count)
{
  if (nb == 0)
    {
      my_putchar('0');
      ++(*count);
    }
  if (nb < 0 && nb > -2147483647)
    {
      my_putchar('-');
      ++(*count);
      nb = -nb;
    }
  if (nb >= 10 && nb <= 2147483647)
    {
      my_put_nbr(nb / 10, count);
      my_put_nbr(nb % 10, count);
    }
  if (nb > 0 && nb < 10)
    {
      my_putchar('0' + nb);
      (*count)++;
    }
  if (nb == -2147483648)
    {
      my_putchar('-');
      nb = 214748364;
      my_put_nbr(nb, count);
      my_putchar('8');
      ++(*count);
    }
  else
    return (0);
}
