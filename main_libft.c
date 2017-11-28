/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_libft.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 18:25:05 by gcaron            #+#    #+#             */
/*   Updated: 2017/11/27 20:57:11 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// LIBRAIRIES STANDARD
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// LIBRAIRIE
#include "libft.h"

// LIENS VERS LES EXERCICES
// inutile avec une librairie

// SEPARATEUR
void	ft_entete_exo(int numexo, char *s) {
	printf("\n######################################\n");
	printf("ex%d: %s\n", numexo, s);
	printf("---------------------------- ex%d %s\n", numexo, s);
}


// MAIN MAIN MAIN MAIN MAIN ###################
int		main(void)
{
	//EFFACER L'ECRAN
	printf("\033[H\033[2J");



/*
	// ##############################
	ft_entete_exo(1, "ft_isupper");
	// ##############################
	printf("ft|unix|attendu pour valeur\n");
	printf("%d|%d|1 attendu pour A\n",		ft_isupper('A'),	isupper('A'));
	printf("%d|%d|1 attendu pour Z\n",		ft_isupper('Z'),	isupper('Z'));
	printf("%d|%d|0 attendu pour b\n",		ft_isupper('b'),	isupper('b'));
	printf("%d|%d|0 attendu pour 127\n",	ft_isupper(127),	isupper(127));
	printf("%d|%d|0 attendu pour '@'64\n",	ft_isupper(64),		isupper(64));
	printf("%d|%d|0 attendu pour '['91\n",	ft_isupper(91),		isupper(91));
	printf("%d|%d|0 attendu pour 320\n",	ft_isupper(320),	isupper(320));


	// ##############################
	ft_entete_exo(2, "ft_ascii");
	// ##############################
	printf("ft|unix|attendu pour valeur\n");
	printf("%d|%d|1 attendu pour A\n",   ft_isascii(65),  isascii(65));
	printf("%d|%d|1 attendu pour 0\n",   ft_isascii(0),   isascii(0));
	printf("%d|%d|1 attendu pour 127\n", ft_isascii(127), isascii(127));
	printf("%d|%d|0 attendu pour 128\n", ft_isascii(128), isascii(128));
	printf("%d|%d|0 attendu pour 255\n", ft_isascii(255), isascii(255));
	printf("%d|%d|0 attendu pour 256\n", ft_isascii(256), isascii(256));
	printf("%d|%d|0 attendu pour -1\n",  ft_isascii(-1),  isascii(-1));
	printf("%d|%d|0 attendu pour 320\n", ft_isascii(320), isascii(320));
	printf("%d|%d|0 attendu pour INT_MIN\n", ft_isascii(-2147483648), isascii(-2147483648));
	printf("%d|%d|0 attendu pour INT_MAX\n", ft_isascii(2147483647),  isascii(2147483647));


	// ##############################
	ft_entete_exo(3, "ft_islower");
	// ##############################
	printf("ft|unix|attendu pour valeur\n");
	printf("%d|%d|1 attendu pour 'a'97\n",	ft_islower(97),		islower(97));
	printf("%d|%d|1 attendu pour 'z'122\n",	ft_islower(122),	islower(122));
	printf("%d|%d|0 attendu pour 123\n",	ft_islower(123),	islower(123));
	printf("%d|%d|0 attendu pour 96\n",		ft_islower(96),		islower(96));
	printf("%d|%d|0 attendu pour 128\n",	ft_islower(128),	islower(128));
	printf("%d|%d|0 attendu pour 255\n",	ft_islower(255),	islower(255));
	printf("%d|%d|0 attendu pour 256\n",	ft_islower(256),	islower(256));
	printf("%d|%d|0 attendu pour -1\n",		ft_islower(-1),		islower(-1));
	printf("%d|%d|0 attendu pour 320\n",	ft_islower(320),	islower(320));
	printf("%d|%d|0 attendu pour INT_MIN\n",	ft_islower(-2147483648), islower(-2147483648));
	printf("%d|%d|0 attendu pour INT_MAX\n",	ft_islower(2147483647),  islower(2147483647));


	// ##############################
	ft_entete_exo(4, "ft_isdigit");
	// ##############################
	printf("ft|unix|attendu pour valeur\n");
	printf("%d|%d|1 attendu pour '0'48\n",	ft_isdigit(48),		isdigit(48));
	printf("%d|%d|1 attendu pour '9'57\n",	ft_isdigit(57),		isdigit(57));
	printf("%d|%d|0 attendu pour 58\n",		ft_isdigit(58),		isdigit(58));
	printf("%d|%d|0 attendu pour 47\n",		ft_isdigit(47),		isdigit(47));
	printf("%d|%d|0 attendu pour 128\n",	ft_isdigit(128),	isdigit(128));
	printf("%d|%d|0 attendu pour 255\n",	ft_isdigit(255),	isdigit(255));
	printf("%d|%d|0 attendu pour 256\n",	ft_isdigit(256),	isdigit(256));
	printf("%d|%d|0 attendu pour -1\n",		ft_isdigit(-1),		isdigit(-1));
	printf("%d|%d|0 attendu pour 320\n",	ft_isdigit(320),	isdigit(320));
	printf("%d|%d|0 attendu pour INT_MIN\n", ft_isdigit(-2147483648), isdigit(-2147483648));
	printf("%d|%d|0 attendu pour INT_MAX\n", ft_isdigit(2147483647),  isdigit(2147483647));


	// ##############################
	ft_entete_exo(5, "ft_isalpha");
	// ##############################
	printf("ft|unix|attendu pour valeur\n");
	printf("%d|%d|1 attendu pour 'a'97\n",	ft_isalpha(97),		isalpha(97));
	printf("%d|%d|1 attendu pour 'z'122\n",	ft_isalpha(122),	isalpha(122));
	printf("%d|%d|1 attendu pour 'A'65\n",	ft_isalpha(65),		isalpha(65));
	printf("%d|%d|1 attendu pour 'Z'90\n",	ft_isalpha(90),		isalpha(90));
	printf("%d|%d|0 attendu pour 96\n",		ft_isalpha(96),		isalpha(96));
	printf("%d|%d|0 attendu pour 123\n",	ft_isalpha(123),	isalpha(123));
	printf("%d|%d|0 attendu pour 128\n",	ft_isalpha(128),	isalpha(128));
	printf("%d|%d|0 attendu pour 255\n",	ft_isalpha(255),	isalpha(255));
	printf("%d|%d|0 attendu pour 256\n",	ft_isalpha(256),	isalpha(256));
	printf("%d|%d|0 attendu pour -1\n",		ft_isalpha(-1),		isalpha(-1));
	printf("%d|%d|0 attendu pour 320\n",	ft_isalpha(320),	isalpha(320));
	printf("%d|%d|0 attendu pour INT_MIN\n", ft_isalpha(-2147483648), isalpha(-2147483648));
	printf("%d|%d|0 attendu pour INT_MAX\n", ft_isalpha(2147483647),  isalpha(2147483647));


	// ##############################
	ft_entete_exo(6, "ft_isalnum");
	// ##############################
	printf("ft|unix|attendu pour valeur\n");
	printf("%d|%d|1 attendu pour '0'48\n",	ft_isalnum(48),		isalnum(48));
	printf("%d|%d|1 attendu pour '9'57\n",	ft_isalnum(57),		isalnum(57));
	printf("%d|%d|1 attendu pour 'a'97\n",	ft_isalnum(97),		isalnum(97));
	printf("%d|%d|1 attendu pour 'z'122\n",	ft_isalnum(122),	isalnum(122));
	printf("%d|%d|1 attendu pour 'A'65\n",	ft_isalnum(65),		isalnum(65));
	printf("%d|%d|1 attendu pour 'Z'90\n",	ft_isalnum(90),		isalnum(90));
	printf("%d|%d|0 attendu pour 96\n",		ft_isalnum(96),		isalnum(96));
	printf("%d|%d|0 attendu pour 123\n",	ft_isalnum(123),	isalnum(123));
	printf("%d|%d|0 attendu pour 128\n",	ft_isalnum(128),	isalnum(128));
	printf("%d|%d|0 attendu pour 255\n",	ft_isalnum(255),	isalnum(255));
	printf("%d|%d|0 attendu pour 256\n",	ft_isalnum(256),	isalnum(256));
	printf("%d|%d|0 attendu pour -1\n",		ft_isalnum(-1),		isalnum(-1));
	printf("%d|%d|0 attendu pour 320\n",	ft_isalnum(320),	isalnum(320));
	printf("%d|%d|0 attendu pour INT_MIN\n", ft_isalnum(-2147483648), isalnum(-2147483648));
	printf("%d|%d|0 attendu pour INT_MAX\n", ft_isalnum(2147483647),  isalnum(2147483647));


	// ##############################
	ft_entete_exo(7, "ft_isblank");
	// ##############################
	printf("ft|unix|attendu pour valeur\n");
	printf("%d|%d|1 attendu pour 'Htab'9\n",	ft_isblank('\t'),	isblank('\t'));
	printf("%d|%d|1 attendu pour 'space'20\n",	ft_isblank(' '),	isblank(' '));
	printf("%d|%d|0 attendu pour 8\n",		ft_isblank(8),		isblank(8));
	printf("%d|%d|0 attendu pour 10\n",		ft_isblank(10),		isblank(10));
	printf("%d|%d|0 attendu pour 19\n",		ft_isblank(19),		isblank(19));
	printf("%d|%d|0 attendu pour 96\n",		ft_isblank(96),		isblank(96));
	printf("%d|%d|0 attendu pour 128\n",	ft_isblank(128),	isblank(128));
	printf("%d|%d|0 attendu pour 255\n",	ft_isblank(255),	isblank(255));
	printf("%d|%d|0 attendu pour 256\n",	ft_isblank(256),	isblank(256));
	printf("%d|%d|0 attendu pour -1\n",		ft_isblank(-1),		isblank(-1));
	printf("%d|%d|0 attendu pour 320\n",	ft_isblank(320),	isblank(320));
	printf("%d|%d|0 attendu pour INT_MIN\n", ft_isblank(-2147483648), isblank(-2147483648));
	printf("%d|%d|0 attendu pour INT_MAX\n", ft_isblank(2147483647),  isblank(2147483647));


	// ##############################
	ft_entete_exo(8, "ft_iscntrl");
	// ##############################
	printf("ft|unix|attendu pour valeur\n");
	printf("%d|%d|1 attendu pour 'null'0\n",	ft_iscntrl(0),		iscntrl(0));
	printf("%d|%d|1 attendu pour 'bell'7\n",	ft_iscntrl(7),		iscntrl(7));
	printf("%d|%d|1 attendu pour 'US'31\n",		ft_iscntrl(31),		iscntrl(31));
	printf("%d|%d|1 attendu pour 'DEL'127\n",	ft_iscntrl(127),	iscntrl(127));
	printf("%d|%d|0 attendu pour 32\n",			ft_iscntrl(32),		iscntrl(32));
	printf("%d|%d|0 attendu pour 128\n",		ft_iscntrl(128),	iscntrl(128));
	printf("%d|%d|0 attendu pour 255\n",		ft_iscntrl(255),	iscntrl(255));
	printf("%d|%d|0 attendu pour 256\n",		ft_iscntrl(256),	iscntrl(256));
	printf("%d|%d|0 attendu pour -1\n",			ft_iscntrl(-1),		iscntrl(-1));
	printf("%d|%d|0 attendu pour 320\n",		ft_iscntrl(320),	iscntrl(320));
	printf("%d|%d|0 attendu pour INT_MIN\n",	ft_iscntrl(-2147483648), iscntrl(-2147483648));
	printf("%d|%d|0 attendu pour INT_MAX\n",	ft_iscntrl(2147483647),  iscntrl(2147483647));


	// ##############################
	ft_entete_exo(9, "ft_isprint");
	// ##############################
	printf("ft|unix|attendu pour valeur\n");
	printf("%d|%d|1 attendu pour ' '32\n",		ft_isprint(32),		isprint(32));
	printf("%d|%d|1 attendu pour '!'33\n",		ft_isprint(33),		isprint(33));
	printf("%d|%d|1 attendu pour '~'126\n",		ft_isprint(126),	isprint(126));
	printf("%d|%d|0 attendu pour 127\n",		ft_isprint(127),	isprint(127));
	printf("%d|%d|0 attendu pour 128\n",		ft_isprint(128),	isprint(128));
	printf("%d|%d|0 attendu pour 255\n",		ft_isprint(255),	isprint(255));
	printf("%d|%d|0 attendu pour 256\n",		ft_isprint(256),	isprint(256));
	printf("%d|%d|0 attendu pour -1\n",			ft_isprint(-1),		isprint(-1));
	printf("%d|%d|0 attendu pour 320\n",		ft_isprint(320),	isprint(320));
	printf("%d|%d|0 attendu pour INT_MIN\n",	ft_isprint(-2147483648), isprint(-2147483648));
	printf("%d|%d|0 attendu pour INT_MAX\n",	ft_isprint(2147483647),  isprint(2147483647));


	// ##############################
	ft_entete_exo(10, "ft_ispunct");
	// ##############################
	printf("ft|unix|attendu pour valeur\n");
	printf("%d|%d|1 attendu pour '!'33\n",		ft_ispunct(33),		ispunct(33));
	printf("%d|%d|1 attendu pour '\\'47\n",		ft_ispunct(47),		ispunct(47));
	printf("%d|%d|1 attendu pour ':'58\n",		ft_ispunct(58),		ispunct(58));
	printf("%d|%d|1 attendu pour '@'64\n",		ft_ispunct(64),		ispunct(64));
	printf("%d|%d|1 attendu pour '['91\n",		ft_ispunct(91),		ispunct(91));
	printf("%d|%d|1 attendu pour '`'96\n",		ft_ispunct(96),		ispunct(96));
	printf("%d|%d|1 attendu pour '{'123\n",		ft_ispunct(123),	ispunct(123));
	printf("%d|%d|1 attendu pour '~'126\n",		ft_ispunct(126),	ispunct(126));
	printf("%d|%d|0 attendu pour ' '32\n",		ft_ispunct(32),		ispunct(32));
	printf("%d|%d|0 attendu pour 127\n",		ft_ispunct(127),	ispunct(127));
	printf("%d|%d|0 attendu pour 128\n",		ft_ispunct(128),	ispunct(128));
	printf("%d|%d|0 attendu pour 255\n",		ft_ispunct(255),	ispunct(255));
	printf("%d|%d|0 attendu pour 256\n",		ft_ispunct(256),	ispunct(256));
	printf("%d|%d|0 attendu pour -1\n",			ft_ispunct(-1),		ispunct(-1));
	printf("%d|%d|0 attendu pour 320\n",		ft_ispunct(320),	ispunct(320));
	printf("%d|%d|0 attendu pour INT_MIN\n",	ft_ispunct(-2147483648), ispunct(-2147483648));
	printf("%d|%d|0 attendu pour INT_MAX\n",	ft_ispunct(2147483647),  ispunct(2147483647));


	// ##############################
	ft_entete_exo(11, "ft_isspace");
	// ##############################
	printf("ft|unix|attendu pour valeur\n");
	printf("%d|%d|1 attendu pour 'Htab'9\n",	ft_isspace('\t'),	isspace('\t'));
	printf("%d|%d|1 attendu pour '\\n'10\n",	ft_isspace('\n'),	isspace('\n'));
	printf("%d|%d|1 attendu pour '\\v'11\n",	ft_isspace('\v'),	isspace('\v'));
	printf("%d|%d|1 attendu pour '\\f'12\n",	ft_isspace('\f'),	isspace('\f'));
	printf("%d|%d|1 attendu pour '\\r'13\n",	ft_isspace('\r'),	isspace('\r'));
	printf("%d|%d|1 attendu pour ' '32\n",		ft_isspace(32),		isspace(32));
	printf("%d|%d|0 attendu pour 127\n",		ft_isspace(127),	isspace(127));
	printf("%d|%d|0 attendu pour 128\n",		ft_isspace(128),	isspace(128));
	printf("%d|%d|0 attendu pour 255\n",		ft_isspace(255),	isspace(255));
	printf("%d|%d|0 attendu pour 256\n",		ft_isspace(256),	isspace(256));
	printf("%d|%d|0 attendu pour -1\n",			ft_isspace(-1),		isspace(-1));
	printf("%d|%d|0 attendu pour 320\n",		ft_isspace(320),	isspace(320));
	printf("%d|%d|0 attendu pour INT_MIN\n",	ft_isspace(-2147483648), isspace(-2147483648));
	printf("%d|%d|0 attendu pour INT_MAX\n",	ft_isspace(2147483647),  isspace(2147483647));


	// ##############################
	ft_entete_exo(12, "ft_isxdigit");
	// ##############################
	printf("ft|unix|attendu pour valeur\n");
	printf("%d|%d|1 attendu pour '0'48\n",	ft_isxdigit(48),		isxdigit(48));
	printf("%d|%d|1 attendu pour '9'57\n",	ft_isxdigit(57),		isxdigit(57));
	printf("%d|%d|1 attendu pour 'a'97\n",	ft_isxdigit(97),		isxdigit(97));
	printf("%d|%d|1 attendu pour 'f'102\n",	ft_isxdigit(102),		isxdigit(102));
	printf("%d|%d|1 attendu pour 'A'65\n",	ft_isxdigit(65),		isxdigit(65));
	printf("%d|%d|1 attendu pour 'F'70\n",	ft_isxdigit(70),		isxdigit(70));
	printf("%d|%d|0 attendu pour 96\n",		ft_isxdigit(96),		isxdigit(96));
	printf("%d|%d|0 attendu pour 103\n",	ft_isxdigit(103),		isxdigit(103));
	printf("%d|%d|0 attendu pour 64\n",		ft_isxdigit(64),		isxdigit(64));
	printf("%d|%d|0 attendu pour 71\n",		ft_isxdigit(71),		isxdigit(71));
	printf("%d|%d|0 attendu pour 128\n",	ft_isxdigit(128),		isxdigit(128));
	printf("%d|%d|0 attendu pour 255\n",	ft_isxdigit(255),		isxdigit(255));
	printf("%d|%d|0 attendu pour 256\n",	ft_isxdigit(256),		isxdigit(256));
	printf("%d|%d|0 attendu pour 0\n",		ft_isxdigit(0),			isxdigit(0));
	printf("%d|%d|0 attendu pour -1\n",		ft_isxdigit(-1),		isxdigit(-1));
	printf("%d|%d|0 attendu pour 320\n",	ft_isxdigit(320),		isxdigit(320));
	printf("%d|%d|0 attendu pour INT_MIN\n", ft_isxdigit(-2147483648), isxdigit(-2147483648));
	printf("%d|%d|0 attendu pour INT_MAX\n", ft_isxdigit(2147483647),  isxdigit(2147483647));
	printf("%d|%d|0 attendu pour INT_MAX\n",	ft_isspace(2147483647),  isspace(2147483647));


	// ##############################
	ft_entete_exo(13, "ft_isgraph");
	// ##############################
	printf("ft|unix|attendu pour valeur\n");
	printf("%d|%d|1 attendu pour '!'33\n",		ft_isgraph(33),			isgraph(33));
	printf("%d|%d|1 attendu pour '~'126\n",		ft_isgraph(126),		isgraph(126));
	printf("%d|%d|0 attendu pour ' '32\n",		ft_isgraph(32),			isgraph(32));
	printf("%d|%d|0 attendu pour 'DEL'127\n",	ft_isgraph(127),		isgraph(127));
	printf("%d|%d|0 attendu pour 128\n",		ft_isgraph(128),		isgraph(128));
	printf("%d|%d|0 attendu pour 255\n",		ft_isgraph(255),		isgraph(255));
	printf("%d|%d|0 attendu pour 256\n",		ft_isgraph(256),		isgraph(256));
	printf("%d|%d|0 attendu pour 0\n",			ft_isgraph(0),			isgraph(0));
	printf("%d|%d|0 attendu pour -1\n",			ft_isgraph(-1),			isgraph(-1));
	printf("%d|%d|0 attendu pour 320\n",		ft_isgraph(320),		isgraph(320));
	printf("%d|%d|0 attendu pour INT_MIN\n",	 ft_isxdigit(-2147483648), isgraph(-2147483648));
*/

/*
	// ##############################
	ft_entete_exo(14, "ft_strlen");
	// ##############################
	char	*s141 = "0123456789";
	char	*s142 = "abc";
	char	*s143 = "";
	printf("ft|unix|attendu pour valeur\n");
	printf("%3zu|%-3zu|10 attendu\n", ft_strlen(s141),	strlen(s141));
	printf("%3zu|%-3zu|3 attendu\n", ft_strlen(s142),	strlen(s142));
	printf("%3zu|%-3zu|0 attendu\n", ft_strlen(s143),	strlen(s143));
*/


/*
	// ##############################
	ft_entete_exo(15, "ft_strcat");
	// ##############################
	printf("ft|unix|attendu|\n");
	char	s151a[100] = "012";
	char	s151b[100] = "012";
	char	s151c[] = "abc";
	printf("%s|012abc|unix\n",     strcat(s151a, s151c));
	printf("%s|012abc|moi\n",   ft_strcat(s151b, s151c));
	char	s152a[100] = "";
	char	s152b[100] = "";
	char	s152c[] = "";
	printf("%s|abc|unix\n",   strcat(s152a, s152c));
	printf("%s|abc|moi\n", ft_strcat(s152b, s152c));
	char	s153a[100] = "";
	char	s153b[100] = "";
	char	s153c[] = "";
	printf("%s||unix\n",       strcat(s153a, s153c));
	printf("%s||moi\n",     ft_strcat(s153b, s153c));
//	char	s154a[] = "000";
//	char	s154b[] = "000";
//	char	s154c[4] = "xxxx";
//	printf("%s||moi\n",     ft_strcat(s154b, s154c));// s1 trop petit
//	printf("%s||unix\n",       strcat(s154a, s154c));// unix abort
*/


	// ##############################
	ft_entete_exo(16, "ft_strchr");
	// ##############################
	char	s161[] = "totoAtoto";
	char	s162[] = "totoXtoto";
	char	*str;
	printf("|%c|A|moi", *ft_strchr(s161, 65));
	printf("|%c|A|unix", *strchr(s161, 65));
//	printf("%c", *ft_strchr(s162, 65));
	printf("%c", *strchr(s162, 65));

/*
	// ##############################
	ft_entete_exo(0, "ft_strclr");
	// ##############################
*/

/*
	// ##############################
	ft_entete_exo(0, "ft_strcmp");
	// ##############################
*/

/*
	// ##############################
	ft_entete_exo(0, "ft_strcpy");
	// ##############################
*/

/*
	// ##############################
	ft_entete_exo(0, "ft_strdel");
	// ##############################
*/

/*
	// ##############################
	ft_entete_exo(0, "ft_strdup");
	// ##############################
*/

/*
	// ##############################
	ft_entete_exo(0, "ft_strequ");
	// ##############################
*/

/*
	// ##############################
	ft_entete_exo(0, "ft_striter");
	// ##############################
*/

/*
	// ##############################
	ft_entete_exo(0, "ft_striteri");
	// ##############################
*/

/*
	// ##############################
	ft_entete_exo(0, "ft_strjoin");
	// ##############################
*/

/*
	// ##############################
	ft_entete_exo(0, "ft_strlcat");
	// ##############################
*/

/*
	// ##############################
	ft_entete_exo(0, "ft_strlcpy");
	// ##############################
*/

/*
	// ##############################
	ft_entete_exo(0, "ft_strlen############# deja fait");
	// ##############################
*/

/*
	// ##############################
	ft_entete_exo(0, "ft_strmap");
	// ##############################
*/

/*
	// ##############################
	ft_entete_exo(0, "ft_strmapi");
	// ##############################
*/

/*
	// ##############################
	ft_entete_exo(0, "ft_strncat");
	// ##############################
*/

/*
	// ##############################
	ft_entete_exo(0, "ft_strncmp");
	// ##############################
*/

/*
	// ##############################
	ft_entete_exo(0, "ft_strncpy");
	// ##############################
*/

/*
	// ##############################
	ft_entete_exo(0, "ft_strnequ");
	// ##############################
*/

/*
	// ##############################
	ft_entete_exo(0, "ft_strnew");
	// ##############################
*/

/*
	// ##############################
	ft_entete_exo(0, "ft_strnstr");
	// ##############################
*/

/*
	// ##############################
	ft_entete_exo(0, "ft_strrchr");
	// ##############################
*/

/*
	// ##############################
	ft_entete_exo(0, "ft_strrev");
	// ##############################
*/

/*
	// ##############################
	ft_entete_exo(0, "ft_strsplit");
	// ##############################
*/

/*
	// ##############################
	ft_entete_exo(0, "ft_strstr");
	// ##############################
*/

/*
	// ##############################
	ft_entete_exo(0, "ft_strsub");
	// ##############################
*/

/*
	// ##############################
	ft_entete_exo(0, "ft_strtrim");
	// ##############################
*/

/*
	// ##############################
	ft_entete_exo(0, "ft_tolower");
	// ##############################
*/

/*
	// ##############################
	ft_entete_exo(0, "ft_toupper");
	// ##############################
*/

/*
	// ##############################
	ft_entete_exo(0, "ft_itoa");
	// ##############################
*/

/*
	// ##############################
	ft_entete_exo(0, "ft_memalloc");
	// ##############################
*/

/*
	// ##############################
	ft_entete_exo(0, "ft_memccpy");
	// ##############################
*/

/*
	// ##############################
	ft_entete_exo(0, "ft_memchr");
	// ##############################
*/

/*
	// ##############################
	ft_entete_exo(0, "ft_memcmp");
	// ##############################
*/

/*
	// ##############################
	ft_entete_exo(0, "ft_memcpy");
	// ##############################
*/

/*
	// ##############################
	ft_entete_exo(0, "ft_del");
	// ##############################
*/


/*
	// ##############################
	ft_entete_exo(0, "ft_memmove");
	// ##############################
*/



/*
	// ##############################
	ft_entete_exo(0, "ft_putnbr_base");
	// ##############################
*/
/*
	// ##############################
	ft_entete_exo(0, "ft_bzero");
	// ##############################
*/

	return (0);
}
