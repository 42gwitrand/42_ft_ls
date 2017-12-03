/*
** my_sort_int_tab.c for my_sort_int_tab.c in /home/gwitrand/Projects/Piscine/j04
**
** Made by Witrand Gaspard
** Login   <gwitrand@epitech.net>
**
** Started on  Thu Oct  6 10:20:30 2016 Witrand Gaspard
** Last update Thu Oct  6 10:28:11 2016 Witrand Gaspard
*/

void	my_sort_int_tab(int *tab, int size)
{
  int	i;
  char trans;

  i = 0;
  while (i <= size)
    {
      if (tab[i] > tab[i + 1])
	{
	  trans = tab[i + 1];
	  tab[i + 1] = tab[i];
	  tab[i] = trans;
	  i = 0;
	}
      i = i + 1;
    }
  return ;
}
