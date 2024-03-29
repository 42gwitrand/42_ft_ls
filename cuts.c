/*
** cuts.c for my_ls in /home/gwitrand/Projects/Mini-project/PSU_2016_my_ls
**
** Made by Witrand Gaspard
** Login   <gwitrand@epitech.net>
**
** Started on  Sun Dec  4 22:40:39 2016 Witrand Gaspard
** Last update Sun Dec  4 22:40:39 2016 Witrand Gaspard
*/

#include "my_ls.h"

char		*cut_time(time_t *time_arg)
{
  static int	time_actual;
  int		i;
  int		nb_two_dots;
  char		*times;
  static time_t	*test;

  i = 0;
  nb_two_dots = 0;
  if (time_actual == 0)
    time_actual = time(test);
  if ((((unsigned int)*time_arg + 15778463) <= time_actual)
      || (time_actual + 3600) <= *time_arg)
    return (print_year(time_arg));
  times = ctime(time_arg);
  while (times[i] != ' ')
    i = i + 1;
  times = times + i + 1;
  while (times[i] && nb_two_dots < 2)
  {
    if (times[i] == ':' && nb_two_dots == 1)
      times[i] = '\0';
    if (times[i++] == ':')
      nb_two_dots = nb_two_dots + 1;
  }
  return (times);
}

char	*cut_name(char *name)
{
  int	i;

  i = 0;
  if (name[1] == 0)
    return (name);
  while (name[i])
    i = i + 1;
  while (name[i] != '/' && i > 0)
    i = i - 1;
  if (i != 0 && name[i + 1] != '\0')
    return (name + i + 1);
  return (name);
}
