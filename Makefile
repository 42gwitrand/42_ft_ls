##
## Makefile for bistro-matic in /home/extra/Projects/Piscine/bistro-matic/
##
## Made by Witrand Gaspard
## Login   <gaspard.witrand@epitech.eu>
##
## Started on  Wed Oct 26 14:36:28 2016 Witrand Gaspard
## Last update Mon Nov 28 18:58:27 2016 Witrand Gaspard
##

CC	=	gcc -g3 -w

RM	=	rm -f

NAME	=	my_ls

SRCS	=	main.c \
		my_ls.c \
		arg.c \
		cuts.c \
		dir-management.c \
		files.c \
		linked-list.c \
		list.c \
		my_malloc.c \
		options-management.c \
		perms.c \
		printing.c \
		time.c \
		tools.c \
		str.c

OBJS	=	$(SRCS:.c=.o)


all: $(NAME)

$(NAME): $(OBJS)
	make -C lib/my
	$(CC) -g -o $(NAME) $(OBJS) lib/my/libmy.a

clean:
	$(RM) $(OBJS)
	make clean -C lib/my

fclean: clean
	$(RM) $(NAME)
	$(RM) libmy.a
	$(RM) lib/libmy.a
	$(RM) lib/my/libmy.a

re: fclean all

.PHONY: all clean fclean re
