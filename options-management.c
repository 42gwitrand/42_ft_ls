#include <stdlib.h>
#include "my_ls.h"

int	init_flags(t_flags **options)
{
  if ((*options = (t_flags*)my_malloc(sizeof(t_flags))) == NULL)
    return (1);
  (*options)->l = 0;
  (*options)->R = 0;
  (*options)->d = 0;
  (*options)->r = 0;
  (*options)->t = 0;
  (*options)->g = 0;
  return (0);
}

int	find_option(char *str, char c)
{
  int	i;

  i = 0;
  while (str[i])
  {
    if (str[i] == c)
      return (1);
    i = i + 1;
  }
  return (0);
}

int	check_bad_option(char *str)
{
  int	i;

  i = 0;
  while (str[i])
  {
    if (str[i] != '-' && str[i] != 'l' && str[i] != 'R' && str[i] != 'd'
        && str[i] != 'r' && str[i] != 't' && str[i] != 'g')
    {
      my_putstr_error("my_ls: invalid option -- '");
      my_putchar_error(str[i]);
      my_putstr_error("'\n");
      return (1);
    }
    i = i + 1;
  }
  return (0);
}

int	option_manag(char *str, t_flags **options)
{
  (find_option(str, 'l') == 1) ? ((*options)->l = 1) : (0);
  (find_option(str, 'R') == 1) ? ((*options)->R = 1) : (0);
  (find_option(str, 'd') == 1) ? ((*options)->d = 1) : (0);
  (find_option(str, 'r') == 1) ? ((*options)->r = 1) : (0);
  (find_option(str, 't') == 1) ? ((*options)->t = 1) : (0);
  (find_option(str, 'g') == 1) ? ((*options)->g = 1) : (0);
  if (check_bad_option(str) == 1)
    return (-1);
  return (0);
}
