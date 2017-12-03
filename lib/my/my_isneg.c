/*
** my_isneg.c for my_isneg.c in /home/gwitrand/Projects/Piscine/j07/lib/my
**
** Made by Witrand Gaspard
** Login   <gwitrand@epitech.net>
**
** Started on  Sun Oct  9 15:20:56 2016 Witrand Gaspard
** Last update Sun Oct  9 15:22:21 2016 Witrand Gaspard
*/

#include "include/lib.h"

int	my_isneg(int nb)
{
  if (nb < 0)
    my_putchar('N');
  if (nb >= 0)
    my_putchar('P');
  return (0);
}
