# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gcaron <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/16 17:54:08 by gcaron            #+#    #+#              #
#    Updated: 2018/01/05 19:01:03 by gcaron           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a
EXE_NAME		=	~/projects/x_libft/a.out
MAIN_NAME		=	~/projects/x_libft/main_libft.c
##MAIN_NAME		=	~/projects/x_libft/main_ft_bases.c
##MAIN_NAME		=	~/projects/x_libft/main_listesChainees.c

DSRC		=	./

DIR_INCL	=	./

SRC			=	$(DSRC)ft_abs.c\
				$(DSRC)ft_atoi.c\
				$(DSRC)ft_atoi_base.c\
				$(DSRC)ft_bzero.c\
				$(DSRC)ft_ctoi.c\
				$(DSRC)ft_find_next_prime.c\
				$(DSRC)ft_intlen.c\
				$(DSRC)ft_is_prime.c\
				$(DSRC)ft_isalnum.c\
				$(DSRC)ft_isalpha.c\
				$(DSRC)ft_isascii.c\
				$(DSRC)ft_isblank.c\
				$(DSRC)ft_iscntrl.c\
				$(DSRC)ft_isdigit.c\
				$(DSRC)ft_isgraph.c\
				$(DSRC)ft_islower.c\
				$(DSRC)ft_isprint.c\
				$(DSRC)ft_ispunct.c\
				$(DSRC)ft_isspace.c\
				$(DSRC)ft_isupper.c\
				$(DSRC)ft_isxdigit.c\
				$(DSRC)ft_itoa.c\
				$(DSRC)ft_itoc.c\
				$(DSRC)ft_max.c\
				$(DSRC)ft_memalloc.c\
				$(DSRC)ft_memccpy.c\
				$(DSRC)ft_memchr.c\
				$(DSRC)ft_memcmp.c\
				$(DSRC)ft_memcpy.c\
				$(DSRC)ft_memdel.c\
				$(DSRC)ft_memmove.c\
				$(DSRC)ft_memset.c\
				$(DSRC)ft_min.c\
				$(DSRC)ft_putchar.c\
				$(DSRC)ft_putchar_fd.c\
				$(DSRC)ft_putendl.c\
				$(DSRC)ft_putendl_fd.c\
				$(DSRC)ft_putnbr.c\
				$(DSRC)ft_putnbr_base.c\
				$(DSRC)ft_putnbr_fd.c\
				$(DSRC)ft_putstr.c\
				$(DSRC)ft_putstr_fd.c\
				$(DSRC)ft_recursive_power.c\
				$(DSRC)ft_sort_integer_table.c\
				$(DSRC)ft_sqrt.c\
				$(DSRC)ft_sqrtplus.c\
				$(DSRC)ft_str_cw.c\
				$(DSRC)ft_str_is_alpha.c\
				$(DSRC)ft_str_is_lowercase.c\
				$(DSRC)ft_str_is_numeric.c\
				$(DSRC)ft_str_is_printable.c\
				$(DSRC)ft_str_is_uppercase.c\
				$(DSRC)ft_strcapitalize.c\
				$(DSRC)ft_strcat.c\
				$(DSRC)ft_strchr.c\
				$(DSRC)ft_strclr.c\
				$(DSRC)ft_strcmp.c\
				$(DSRC)ft_strcpy.c\
				$(DSRC)ft_strdel.c\
				$(DSRC)ft_strdup.c\
				$(DSRC)ft_strequ.c\
				$(DSRC)ft_striter.c\
				$(DSRC)ft_striteri.c\
				$(DSRC)ft_strjoin.c\
				$(DSRC)ft_strlcat.c\
				$(DSRC)ft_strlcpy.c\
				$(DSRC)ft_strlen.c\
				$(DSRC)ft_strlowcase.c\
				$(DSRC)ft_strmap.c\
				$(DSRC)ft_strmapi.c\
				$(DSRC)ft_strncat.c\
				$(DSRC)ft_strncmp.c\
				$(DSRC)ft_strncpy.c\
				$(DSRC)ft_strnequ.c\
				$(DSRC)ft_strnew.c\
				$(DSRC)ft_strnlen.c\
				$(DSRC)ft_strnstr.c\
				$(DSRC)ft_strrchr.c\
				$(DSRC)ft_strrev.c\
				$(DSRC)ft_strsplit.c\
				$(DSRC)ft_strstr.c\
				$(DSRC)ft_strsub.c\
				$(DSRC)ft_strtrim.c\
				$(DSRC)ft_strupcase.c\
				$(DSRC)ft_tolower.c\
				$(DSRC)ft_toupper.c\
				$(DSRC)ft_stk_addtail.c\
				$(DSRC)ft_stk_addtop.c\
				$(DSRC)ft_stk_lenght.c\
				$(DSRC)ft_stk_print.c\
				$(DSRC)ft_stk_insert.c\
				$(DSRC)ft_stk_rmall.c\
				$(DSRC)ft_stk_rmnext.c\
				$(DSRC)ft_stk_rmtail.c\
				$(DSRC)ft_stk_rmtop.c\
				$(DSRC)ft_lstadd.c\
				$(DSRC)ft_lstdel.c\
				$(DSRC)ft_lstdelone.c\
				$(DSRC)ft_lstiter.c\
				$(DSRC)ft_lstmap.c\
				$(DSRC)ft_lstnew.c

OBJ			=	$(SRC:.c=.o)

CC			=	gcc

##CFLAGS		=	
CFLAGS		=	-Wall -Werror -Wextra

INCLUDES	=	-I $(DIR_INCL)

LIB		=	-L. -lft

RM			=	rm -f

all:		$(NAME)
#			@make $(NAME)

$(NAME):	$(OBJ)
			ar rc $(NAME) $(OBJ)	## creation de la lib
			ranlib $(NAME)			## creation de l'index de la libft

##$(OBJ):		$(SRC)				## verif fichiers .c tous dispo
#%.o: %.c
#			$(CC) $(CFLAGS) -c $(SRC) $(INCLUDES)	## pre-compil des .o

exe:		$(LIB_NAME) $(MAIN_NAME)
			$(CC) $(CFLAGS) -o $(EXE_NAME) $(MAIN_NAME) $(INCLUDES) $(LIB)

help:
	@echo "Cibles disponibles : all, clean, fclean, re, exe, help"

.PHONY: clean fclean			## les dependances de la cible .PHONY
								## sont systematiquement reconstruites

clean:
			$(RM) $(OBJ)		## supprime les fichiers .o
			$(RM) *.o

fclean:		clean
			$(RM) $(NAME)		## supprime l'executable (ici libft.a)
			$(RM) $(EXE_NAME)	## supprime l'exe (ici a.out)

re:			fclean all
