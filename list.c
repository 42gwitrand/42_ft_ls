/*
** list.c for my_ls in /home/gwitrand/Projects/Mini-project/PSU_2016_my_ls
**
** Made by Witrand Gaspard
** Login   <gwitrand@epitech.net>
**
** Started on  Sun Dec  4 22:41:22 2016 Witrand Gaspard
** Last update Sun Dec  4 22:41:23 2016 Witrand Gaspard
*/

#include <stdlib.h>
#include "my_ls.h"

int		push_sort_file(t_list_file **pile_file, char *name)
{
  t_list_file	*new;
  t_list_file	*tmp;
  t_list_file	*swap;

  tmp = *pile_file;
  if ((new = create_elem(name)) == NULL)
    return (-1);
  while (tmp->next && my_strcmp(tmp->next->name, name) <= 0)
    tmp = tmp->next;
  if (my_strcmp(tmp->name, name) <= 0)
  {
    swap = tmp->next;
    tmp->next = new;
    new->next = swap;
    return (0);
  }
  new->next = *pile_file;
  *pile_file = new;
  return (0);
}

int		push_reverse_file(t_list_file **pile_file, char *name)
{
  t_list_file	*new;
  t_list_file	*tmp;
  t_list_file	*swap;

  tmp = *pile_file;
  if ((new = create_elem(name)) == NULL)
    return (-1);
  while (tmp->next && my_strcmp(tmp->next->name, name) > 0)
    tmp = tmp->next;
  if (my_strcmp(tmp->name, name) > 0)
  {
    swap = tmp->next;
    tmp->next = new;
    new->next = swap;
    return (0);
  }
  new->next = *pile_file;
  *pile_file = new;
  return (0);
}
