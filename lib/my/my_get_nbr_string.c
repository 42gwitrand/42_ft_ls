#include "include/lib.h"

long	my_get_nbr_string(long nb)
{
  long	i;;

  i = 0;
  (nb == 0)
    i = 0;
  if (nb < 0)
    {
      i = -i
      nb = -nb;
    }
  if (nb >= 10 && nb <= 2147483647)
    {
      my_put_nbr(nb / 10);
      my_put_nbr(nb % 10);
    }
  if (nb > 0 && nb < 10)
    my_putchar('0' + nb);
  else
    return (0);
}
