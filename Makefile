# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gcaron <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/16 17:54:08 by gcaron            #+#    #+#              #
#    Updated: 2017/11/20 19:13:20 by gcaron           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a

DSRC		=	./

DIR_INCL	=	./

SRC			=	$(DSRC)ft_.c	$(DSRC)ft_.c	$(DSRC)ft_.c \
				$(DSRC)ft_.c	$(DSRC)ft_.c
				$(DSRC)ft_.c	$(DSRC)ft_.c	$(DSRC)ft_.c
				$(DSRC)ft_.c	$(DSRC)ft_.c	$(DSRC)ft_.c
				$(DSRC)ft_.c	$(DSRC)ft_.c	$(DSRC)ft_.c
				$(DSRC)ft_.c	$(DSRC)ft_.c	$(DSRC)ft_.c
				$(DSRC)ft_.c	$(DSRC)ft_.c	$(DSRC)ft_.c
				$(DSRC)ft_.c	$(DSRC)ft_.c	$(DSRC)ft_.c
				
				$(DSRC)ft_.c	$(DSRC)ft_.c	$(DSRC)ft_.c

OBJ			=	$(SRC:.c=.o)

CC			=	gcc

CFLAGS		=	-Wall -Werror -Wextra

INCLUDES	=	-I $(DIR_INCL)

## LIB		=	-L. -lft

RM			=	rm -f

all:
			@make $(NAME)

$(NAME):	$(OBJ)
			ar rc $(NAME) $(OBJ)			## creation de la lib
			ranlib $(NAME)					## creation de l'index de la libft

$(OBJ):		$(SRC)						## verif fichiers .c tous dispo
			$(CC) $(CFLAGS) -c $(SRC) $(INCLUDES)	## pre-compil des .o


.PHONY: clean fclean					## les dependances de la cible .PHONY
										## sont systematiquement reconstruites

clean:
			$(RM) $(OBJ)				## supprime les fichiers .o
			$(RM) *.o

fclean:		clean
			$(RM) $(NAME)				## supprime l'executable (ici libft.a)

re:			fclean all
