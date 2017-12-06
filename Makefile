# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gcaron <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/16 17:54:08 by gcaron            #+#    #+#              #
#    Updated: 2017/12/05 09:54:28 by gcaron           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a
EXE_NAME		=	a.out
MAIN_NAME		=	main_ft_str_cw.c

DSRC		=	./

DIR_INCL	=	./

SRC			=	$(DSRC)ft_atoi.c\
				$(DSRC)ft_bzero.c\
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
				$(DSRC)ft_memalloc.c\
				$(DSRC)ft_memccpy.c\
				$(DSRC)ft_memchr.c\
				$(DSRC)ft_memcmp.c\
				$(DSRC)ft_memcpy.c\
				$(DSRC)ft_memdel.c\
				$(DSRC)ft_memmove.c\
				$(DSRC)ft_memset.c\
				$(DSRC)ft_putchar.c\
				$(DSRC)ft_putchar_fd.c\
				$(DSRC)ft_putendl.c\
				$(DSRC)ft_putendl_fd.c\
				$(DSRC)ft_putnbr.c\
				$(DSRC)ft_putnbr_base.c\
				$(DSRC)ft_putnbr_fd.c\
				$(DSRC)ft_putstr.c\
				$(DSRC)ft_putstr_fd.c\
				$(DSRC)ft_str_cw.c\
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
				$(DSRC)ft_tolower.c\
				$(DSRC)ft_toupper.c

OBJ			=	$(SRC:.c=.o)

CC			=	gcc

##CFLAGS		=	
##CFLAGS		=	-Wall -Werror -Wextra

INCLUDES	=	-I $(DIR_INCL)

LIB		=	-L. -lft

RM			=	rm -f

all:		$(NAME)
#			@make $(NAME)

$(NAME):	$(OBJ)
			ar rc $(NAME) $(OBJ)			## creation de la lib
			ranlib $(NAME)					## creation de l'index de la libft

##$(OBJ):		$(SRC)						## verif fichiers .c tous dispo
%.o: %.c
			$(CC) $(CFLAGS) -c $(SRC) $(INCLUDES)	## pre-compil des .o

exe:		$(LIB_NAME) $(MAIN_NAME)
			$(CC) $(CFLAGS) -o $(EXE_NAME) $(MAIN_NAME) $(INCLUDES) $(LIB)

help:
	@echo "Cibles disponibles : all, clean, fclean, re, help"

.PHONY: clean fclean					## les dependances de la cible .PHONY
										## sont systematiquement reconstruites

clean:
			$(RM) $(OBJ)				## supprime les fichiers .o
			$(RM) *.o

fclean:		clean
			$(RM) $(NAME)				## supprime l'executable (ici libft.a)
			$(RM) $(EXE_NAME)				## supprime l'exe (ici a.out)

re:			fclean all
