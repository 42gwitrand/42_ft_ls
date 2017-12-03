/*
** main.c for my_ls in /home/gwitrand/Projects/Mini-project/PSU_2016_my_ls
**
** Made by Witrand Gaspard
** Login   <gwitrand@epitech.net>
**
** Started on  Sun Dec  4 22:41:28 2016 Witrand Gaspard
** Last update Sun Dec  4 22:41:28 2016 Witrand Gaspard
*/

#include <stdlib.h>
#include "my_ls.h"

int		main(int argc, char **argv)
{
  t_flags	*options;
  t_list_file	*list_file;
  int		check_option;
  int		i;

  i = 1;
  check_option = 0;
  list_file = NULL;
  if ((init_flags(&options)) == 1)
    return (1);
  while (i < argc)
  {
    if (argv[i][0] == '-')
      check_option = option_manag(argv[i], &options);
    else
      check_option = push_file(options, &list_file, argv[i], 0);
    if (check_option != 0)
      return (1);
    i = i + 1;
  }
  if ((my_ls(options, list_file)) == -1)
    return (1);
  free_the_list(&list_file);
  free(options);
  return (0);
}
