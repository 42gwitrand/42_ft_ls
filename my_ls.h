/*
** my_ls.h for my_ls in /home/gwitrand/Projects/Mini-project/PSU_2016_my_ls
**
** Made by Witrand Gaspard
** Login   <gwitrand@epitech.net>
**
** Started on  Sun Dec  4 22:41:59 2016 Witrand Gaspard
** Last update Sun Dec  4 22:42:00 2016 Witrand Gaspard
*/

#ifndef MY_LS_H_
# define MY_LS_H_

#include <time.h>
#include <sys/stat.h>
#include <stddef.h>

typedef struct	s_flags
{
  int		l;
  int		R;
  int		d;
  int		r;
  int		t;
  int		g;
  int		F;
}		t_flags;

typedef struct		s_file_info
{
  mode_t		permissions;
  int			size_nb_links;
  int			size_user;
  int			size_group;
  int			size_file;
  char			*modif_date;
}			t_file_info;

typedef struct		s_list_file
{
  char			*name;
  mode_t		time;
  t_file_info		*infos;
  struct s_list_file	*next;
}			t_list_file;

typedef struct		s_max_size
{
  unsigned int		nb_links;
  unsigned int		user;
  unsigned int		grp;
  unsigned int		size_file;
}			t_max_size;

unsigned int	print_block_allocated(char *dir_name);
void		*my_malloc(size_t size);
void		my_putchar(char c);
void		my_putnbr(int nb);
void		my_putstr(char *str);
void		my_putchar_error(char c);
void		my_putstr_error(char *str);
int		option_manag(char *str, t_flags **options);
int		push_file(t_flags *options, t_list_file **pile_file,
			  char *name, time_t time);
int		size_nb(unsigned long long nb);
int		my_printf(const char *format, ...);
char		*print_year(time_t *time_arg);
void		print_permissions(mode_t st_mode);
int		print_device(t_max_size *max, struct stat *res_stat,
			     char *file_name, int g);
int		print_file(t_max_size *max, struct stat *res_stat,
			   char *file_name, int g);
char		*str_cat(char *s1, char *s2);
int		write_lnk(struct stat *res_stat, char *file_name);
int		ls_files_in_args(t_flags *options, t_list_file *list_file);
int		ls_regulars_files(t_flags *options, t_list_file *list_file,
				  int is_cut);
int		disp_infos_file(t_flags *options, t_list_file *file,
				t_max_size *max);
int		prepare_info_file(t_flags *options, t_list_file *tmp,
				  t_max_size *max);
char		*cut_name(char *name);
t_max_size	*init_max(t_max_size *max);
void		error_output(char *file_or_dir, int error);
void		print_dir_name(char *dir_name);
int		finish_ls_directory(t_flags *options,
				    t_list_file *list_files_dir,
				    char *dir_name);
int		gere_options_dir(t_flags *options, int is_first,
				 char *dir_name, int test_args);
int		ls_directory(t_flags *options, char *dir_name,
			     int is_first, int test_args);
int		disp_the_directory(t_flags *options,
				   t_list_file *list_file);
char		*cut_time(time_t *time_arg);
int		recurs_ls(t_flags *options, char *dir_name,
			  t_list_file *list_files_dir);
int		is_good_dir_in_arg(t_list_file *list_file);
int		nb_arg(t_list_file *list_file);
void		get_max(t_max_size *max, t_file_info *info);
char		to_lower(char c);
int		my_strcmp(char *s1, char *s2);
int		push_sort_file(t_list_file **pile_file, char *name);
int		push_reverse_file(t_list_file **pile_file, char *name);
t_list_file	*create_elem(char *name);
int		push_time_file(t_list_file **pile_file, char *name,
			       time_t time);
int		push_rtime_file(t_list_file **pile_file, char *name,
				time_t time);
void		free_the_list(t_list_file **pile);

#endif
