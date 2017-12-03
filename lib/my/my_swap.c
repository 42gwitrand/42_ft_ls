/*
** my_swap.c for my_swap.c in /home/gwitrand/Projects/Piscine/j07/lib/my
**
** Made by Witrand Gaspard
** Login   <gwitrand@epitech.net>
**
** Started on  Sun Oct  9 15:32:40 2016 Witrand Gaspard
** Last update Sun Oct  9 15:32:41 2016 Witrand Gaspard
*/

int	my_swap(int *a, int *b)
{
  int c;

  c = *a;
  *a = *b;
  *b = c;
}
