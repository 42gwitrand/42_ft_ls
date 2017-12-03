/*
** my_putchar.c for my_putchar.c in /home/gwitrand/Projects/Piscine/j07/lib/my
**
** Made by Witrand Gaspard
** Login   <gwitrand@epitech.net>
**
** Started on  Sun Oct  9 15:20:07 2016 Witrand Gaspard
** Last update Sun Oct  9 15:20:30 2016 Witrand Gaspard
*/

#include <unistd.h>

int	my_putchar(char c)
{
  write(1, &c, 1);
  return (0);
}

int	my_putchar_error(char c)
{
  write(2, &c, 1);
  return (0);
}
