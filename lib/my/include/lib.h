/*
** lib.h for lib in /home/gwitrand/Projects/Piscine/bistro-matic/lib/my
**
** Made by Witrand Gaspard
** Login   <gwitrand@epitech.net>
**
** Started on  Sun Nov  6 17:59:24 2016 Witrand Gaspard
** Last update Wed Nov 16 14:05:12 2016 Witrand Gaspard
*/

#ifndef LIB_H
# define LIB_H

# include <stdarg.h>
# define NB_FLAGS 14


int	my_putchar(char c);
char	*my_strlowcase(char *str);
int	my_putstr(char *str);
int	my_strlen(char *str);
int	my_put_nbr(int nb, int *count);

void	isstring(va_list ap, int *count);
void	isint(va_list ap, int *count);
void	ischar(va_list ap, int *count);
void	isintpointer(va_list ap, int *count);
int	my_put_nbr_long(unsigned int nb, int *count);
int	my_putnbr_base(long nb, char *base, int *count);
void	ispointerb16(va_list ap, int *count);
void	ispointerb16caps(va_list ap, int *count);
void	ispointeraddress(va_list ap, int *count);
void	isintb8(va_list ap, int *count);
void	isinttobinary(va_list ap, int *count);
int     my_str_isprintablechar(char c);
void	print_nonprintable(char c, int *count);
void	isstringhigh(va_list ap, int *count);
void	isfloat(va_list ap, int *count);
void	ispercent(va_list ap, int *count);
void	success(va_list ap, int *count);

#endif /* LIB_H */
