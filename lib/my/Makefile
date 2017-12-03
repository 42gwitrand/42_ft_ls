##
## Makefile for Makefile in /home/gwitrand/Projects/Piscine/j10/lib/my
##
## Made by Witrand Gaspard
## Login   <gwitrand@epitech.net>
##
## Started on  Fri Oct 14 09:29:36 2016 Witrand Gaspard
## Last update Fri Oct 14 12:28:28 2016 Witrand Gaspard
##

CC	=	gcc -g -w

RM	=	rm -f

NAME	=	libmy.a

SRCS	=	my_find_prime_sup.c \
		my_getnbr.c \
		my_isneg.c \
		my_is_prime.c \
		my_power_rec.c \
		my_putchar.c \
		my_put_nbr.c \
		my_putstr.c \
		my_revstr.c \
		my_showmem.c \
		my_showstr.c \
		my_sort_int_tab.c \
		my_square_root.c \
		my_strcapitalize.c \
		my_strcat.c \
		my_strcmp.c \
		my_strcpy.c \
		my_str_isalpha.c \
		my_str_islower.c \
		my_str_isnum.c \
		my_str_isprintable.c \
		my_str_isupper.c \
		my_strlen.c \
		my_strlowcase.c \
		my_strncat.c \
		my_strncmp.c \
		my_strncpy.c \
		my_strstr.c \
		my_strupcase.c \
		my_swap.c \
		printf/my_printf.c \
		printf/basic_checks.c \
		printf/my_printf_checks2.c \
		printf/my_putnbr_base.c \
		printf/my_put_nbr_long.c \
		printf/my_printf_checks3.c \
		printf/my_printf_checks4.c

OBJS	=	$(SRCS:.c=.o)


all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)
	cp $(NAME) ..
	cp $(NAME) ../..

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) ../../libmy.a
	$(RM) ../libmy.a
	$(RM) libmy.a

re: clean all

.PHONY: all clean fclean re
