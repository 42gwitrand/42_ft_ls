/*
** dir-management.c for my_ls in /home/gwitrand/Projects/Mini-project/PSU_2016_my_ls
**
** Made by Witrand Gaspard
** Login   <gwitrand@epitech.net>
**
** Started on  Sun Dec  4 22:40:45 2016 Witrand Gaspard
** Last update Sun Dec  4 22:40:46 2016 Witrand Gaspard
*/

#include <sys/types.h>
#include <dirent.h>
#include "my_ls.h"

void	print_dir_name(char *dir_name)
{
  int	i;

  i = 0;
  while (dir_name[i])
  {
    if (dir_name[i + 1] != '\0' || i == 0)
      my_putchar(dir_name[i]);
    i = i + 1;
  }
  if (i > 1 && dir_name[i - 1] != '.')
    my_putchar(dir_name[i - 1]);
  my_putchar(':');
  my_putchar('\n');
}

int	finish_ls_directory(t_flags *options, t_list_file *list_files_dir,
			    char *dir_name)
{
  if ((ls_regulars_files(options, list_files_dir, 1)) == -1)
    return (-1);
  if (options->R == 1)
    if ((recurs_ls(options, dir_name, list_files_dir)) == -1)
      return (-1);
  free_the_list(&list_files_dir);
  return (0);
}

int	gere_options_dir(t_flags *options, int is_first, char *dir_name,
			 int test_args)
{
  if (is_first >= 2  && test_args > 1)
    my_putchar('\n');
  if (options->R == 1 || test_args > 1)
    print_dir_name(dir_name);
  if (options->l == 1)
    if ((print_block_allocated(dir_name)) == -1)
      return (-1);
  return (0);
}

int		ls_directory(t_flags *options, char *dir_name,
			     int is_first, int test_args)
{
  struct dirent	*read_dir;
  struct stat	res_stat;
  t_list_file	*list_files_dir;
  char		*name_with_path;
  char		*name_without_path;
  DIR		*dir;

  if ((dir = opendir(dir_name)) == NULL)
    return (-1);
  if ((gere_options_dir(options, is_first, dir_name, test_args)) == -1)
    return (-1);
  list_files_dir = NULL;
  while ((read_dir = readdir(dir)))
  {
    if ((name_with_path = str_cat(dir_name, read_dir->d_name)) == NULL)
      return (-1);
    lstat(name_with_path, &res_stat);
    if (push_file(options, &list_files_dir, name_with_path, res_stat.st_mtime)
	== -1)
      return (-2);
  }
  closedir(dir);
  if ((finish_ls_directory(options, list_files_dir, dir_name)) == -1)
    return (-2);
  return (0);
}

int		disp_the_directory(t_flags *options, t_list_file *list_file)
{
  t_list_file	*tmp;
  struct stat	res_stat;
  t_list_file	*file_and_dir;
  DIR		*dir;

  tmp = list_file;
  file_and_dir = NULL;
  while (tmp)
  {
    if ((dir = opendir(tmp->name)) == NULL
	|| (lstat(tmp->name, &res_stat) == -1))
      error_output(tmp->name, 2);
    else
      if ((push_file(options, &file_and_dir, tmp->name, res_stat.st_mtime))
	  == -1)
	return (-1);
    tmp = tmp->next;
  }
  if ((ls_regulars_files(options, file_and_dir, 0)) == -1)
    return (-1);
  free_the_list(&file_and_dir);
  return (0);
}
