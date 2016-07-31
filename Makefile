##
## Makefile for  in /home/bertha_e/rendu/Synthse/palindrome
## 
## Made by Berthaud Elodie
## Login   <bertha_e@epitech.net>
## 
## Started on  Thu Jun 16 09:11:30 2016 Berthaud Elodie
## Last update Sat Jun 18 13:20:34 2016 Berthaud Elodie
##

NAME	=	palindrome

SRC	=	src/main.c \
		src/iteration.c \
		src/get_int.c \
		src/my_int_len.c \
		src/revstr.c \
		src/tab.c \
		src/options.c \
		src/tab_function.c \
		src/prints.c \
		src/my_putstr_error.c \
		src/my_strdup.c \
		src/fill_struct.c \
		src/fill_with_opt.c \
		src/check.c \
		src/error.c \
		src/funct_comb.c \
		src/convert_in_base.c \
		src/puissance.c \
		src/others.c

OBJ	=	$(SRC.c=.o)

CC	=	gcc -g

RM	=	rm -f

CFLAGS	=	-W -Wall -I./include

$(NAME):$(OBJ)
	$(CC) $(SRC) -o $(NAME) $(CFLAGS)

all:	$(NAME)

clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all
