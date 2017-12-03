/*
** my_putnbr_base.c for my_putnbr_base.c in /home/gwitrand/Projects/Piscine/j06
**
** Made by Witrand Gaspard
** Login   <gwitrand@epitech.net>
**
** Started on  Mon Oct 10 11:52:03 2016 Witrand Gaspard
** Last update Tue Oct 11 21:05:31 2016 Witrand Gaspard
*/

#include "include/my.h"

int		my_putnbr_base(long nb, char *base)
{
  unsigned int	len;

  len = my_strlen(base);
  if (nb < 0)
    {
      my_putchar('-');
      nb = -nb;
    }
  if (nb >= len)
    {
      my_putnbr_base(nb / len, base);
      my_putnbr_base(nb % len, base);
    }
  else
    {
      my_putchar(base[nb]);
    }
}
