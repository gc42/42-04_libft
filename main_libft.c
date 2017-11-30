/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_libft.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 18:25:05 by gcaron            #+#    #+#             */
/*   Updated: 2017/11/29 19:47:03 by gcaron           ###   ########.fr       */
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
	// ##############################				OK
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
	// ##############################				OK
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
	// ##############################				OK
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
	// ##############################				OK
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
	// ##############################				OK
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
	// ##############################				OK
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
	// ##############################				OK
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
	// ##############################				OK
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
	// ##############################				OK
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
	// ##############################				OK
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
	// ##############################				OK
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
	// ##############################				OK
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
	// ##############################				OK
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
	// ##############################				OK
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
	// ##############################				OK
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

/*
	// ##############################
	ft_entete_exo(16, "ft_strchr");
	// ##############################
	// ##############################				OK
	char	s161[] = "totoAtoto";
	char	s162[] = "totoXtoto";
	char	*str163, *str164;
	printf("Cherche 'A' dans 'totoAtoto'\n");
	printf("|%c|A|moi\n", *ft_strchr(s161, 65));
	printf("|%c|A|unix\n",   *strchr(s161, 65));
	printf("Cherche '\\0' dans 'totoAtoto'\n");
	printf("|%c||moi  pour '\\0'\n", *ft_strchr(s161, '\0'));
	printf("|%c||unix pour '\\0'\n",   *strchr(s161, '\0'));
	str163 = ft_strchr(s162, 65);
	str164 =    strchr(s162, 65);
	printf("Ne trouve pas 'A' dans 'totoXtoto', renvoie NULL\n");
	printf("|%p|0x0|moi  pour NULL\n",  str163);
	printf("|%p|0x0|unix pour NULL\n", str164);
*/
/*
	// ##############################
	ft_entete_exo(17, "ft_strclr");
	// ##############################
	// ##############################				OK
	char	s171[] = "totoAtoto";
	printf("%s\tstring de depart\n", s171);
	printf("%c|t|\t\tpremier caractere avant\n", *s171);
	ft_strclr(s171);
	printf("%d|0|\t\tpremier caractere apres\n", *s171);
*/


/*
	// ##############################
	ft_entete_exo(18, "ft_strcmp");
	// ##############################
	// ##############################				OK
	char	str181[] = "Pour comparer";
	char	str182[] = "Pour comparer";
	char	str183[] = "Pour domparer";
	char	str184[] = "Pour bomparer";
	char	str185[] = "P";
	char	str186[] = "";

	printf("0 (attendu, chaines identiques)\n");
	printf("%d(<- Unixstrcmp)\n",             strcmp(str181, str182));
	printf("%d(<<- result ft_strcmp)\n\n", ft_strcmp(str181, str182));

	printf("-1 (attendu, chaine s1 inferieure (str61/str183 c/d))\n");
	printf("%d(<- Unixstrcmp)\n",             strcmp(str181, str183));
	printf("%d(<<- result ft_strcmp)\n\n", ft_strcmp(str181, str183));

	printf("1 (attendu, chaine s1 superieure (str181/str184 c/b))\n");
	printf("%d(<- Unixstrcmp)\n",             strcmp(str181, str184));
	printf("%d(<<- result ft_strcmp)\n\n", ft_strcmp(str181, str184));

	printf("111 (attendu, chaine s2 1 seul caractere (str181/str185 o/rien))\n");
	printf("%d(<- Unixstrcmp)\n",             strcmp(str181, str185));
	printf("%d(<<- result ft_strcmp)\n\n", ft_strcmp(str181, str185));

	printf("80 (attendu, chaine s2 est vide (str61/str186 P/rien))\n");
	printf("%d(<- Unixstrcmp)\n",             strcmp(str181, str186));
	printf("%d(<<- result ft_strcmp)\n\n", ft_strcmp(str181, str186));

	printf("-80 (attendu, chaine s1 est vide (str66/str181 rien/P))\n");
	printf("%d(<- Unixstrcmp)\n",             strcmp(str186, str181));
	printf("%d(<<- result ft_strcmp)\n\n", ft_strcmp(str186, str181));
*/

/*
	// ##############################
	ft_entete_exo(19, "ft_strcpy");
	// ##############################
	// ##############################				OK
	char	dest191[] =  "aaaaaaaaaa";
	char	dest1910[] = "aaaaaaaaaa";
	char	src191[] =   "BBBB";
	ft_putstr(dest191);
	ft_putchar('\n');
	ft_putstr(src191);
	ft_putchar('\n');
	printf("BBBB(attendu 'dest[]' plus long que 'src')\n");
	printf("%s(Unixstrcpy)\n",             strcpy(dest191,  src191));
	printf("%s(<- result ft_strcpy)\n", ft_strcpy(dest1910, src191));
	ft_putchar('\n');

	char	dest192[] =  "aaaa";
	char	dest1920[] = "aaaa";
	char	src192[] =   "BBBB";
	ft_putstr(dest192);
	ft_putchar('\n');
	ft_putstr(src192);
	ft_putchar('\n');
	printf("BBBB(attendu, 'dest[]' == 'src')\n");
	printf("%s(Unixstrcpy)\n",             strcpy(dest192,  src192));
	printf("%s(<- result ft_strcpy)\n", ft_strcpy(dest1920, src192));
	ft_putchar('\n');

	char	dest193[20] =  "aaa";
	char	dest1930[20] = "aaa";
	char	src193[] =     "BBBBCCCDD";
	ft_putstr(dest193);
	ft_putchar('\n');
	ft_putstr(src193);
	ft_putchar('\n');
	printf("BBBBCCCDD(attendu, dest[20]='aaa', 3 caracteres)\n");
	printf("%s(>-Unixstrcpy)\n",           strcpy(dest193,  src193));
	printf("%s(>- result ft_strcpy)\n", ft_strcpy(dest1930, src193));
*/

/*
	// ##############################
	ft_entete_exo(20, "ft_strdel");
	// ##############################
*/

/*
	// ##############################
	ft_entete_exo(21, "ft_strdup");
	// ##############################
*/

/*
	// ##############################
	ft_entete_exo(22, "ft_strequ");
	// ##############################
*/

/*
	// ##############################
	ft_entete_exo(23, "ft_striter");
	// ##############################
*/

/*
	// ##############################
	ft_entete_exo(24, "ft_striteri");
	// ##############################
*/

/*
	// ##############################
	ft_entete_exo(25, "ft_strjoin");
	// ##############################
*/

/*
	// ##############################
	ft_entete_exo(26, "ft_strlcat");
	// ##############################
*/

/*
	// ##############################
	ft_entete_exo(27, "ft_strlcpy");
	// ##############################
*/

/*
	// ##############################
	ft_entete_exo(28, "ft_strlen############# deja fait");
	// ##############################
*/

/*
	// ##############################
	ft_entete_exo(29, "ft_strmap");
	// ##############################
*/

/*
	// ##############################
	ft_entete_exo(30, "ft_strmapi");
	// ##############################
*/

/*
	// ##############################
	ft_entete_exo(31, "ft_strncat");
	// ##############################
*/

/*
	// ##############################
	ft_entete_exo(32, "ft_strncmp");
	// ##############################
*/

/*
	// ##############################
	ft_entete_exo(33, "ft_strncpy");
	// ##############################
*/

/*
	// ##############################
	ft_entete_exo(34, "ft_strnequ");
	// ##############################
*/

/*
	// ##############################
	ft_entete_exo(35, "ft_strnew");
	// ##############################
*/

/*
	// ##############################
	ft_entete_exo(36, "ft_strnstr");
	// ##############################
*/

/*
	// ##############################
	ft_entete_exo(37, "ft_strrchr");
	// ##############################
*/

/*
	// ##############################
	ft_entete_exo(38, "ft_strrev");
	// ##############################
*/

/*
	// ##############################
	ft_entete_exo(39, "ft_strsplit");
	// ##############################
*/

/*
	// ##############################
	ft_entete_exo(40, "ft_strstr");
	// ##############################
*/

/*
	// ##############################
	ft_entete_exo(41, "ft_strsub");
	// ##############################
*/

/*
	// ##############################
	ft_entete_exo(42, "ft_strtrim");
	// ##############################
*/

/*
	// ##############################
	ft_entete_exo(43, "ft_tolower");
	// ##############################
*/

/*
	// ##############################
	ft_entete_exo(44, "ft_toupper");
	// ##############################
*/

/*
	// ##############################
	ft_entete_exo(45, "ft_itoa");
	// ##############################
*/

/*
	// ##############################
	ft_entete_exo(46, "ft_memalloc");
	// ##############################
*/

/*
	// ##############################
	ft_entete_exo(47, "ft_memccpy");
	// ##############################
*/

/*
	// ##############################
	ft_entete_exo(48, "ft_memchr");
	// ##############################
	// ##############################				OK
	char	   s481[] = "totoAtoto";
	char	   s482[] = "totoXtoto";
	char	*str483, *str484;
	printf("Cherche 'A' dans 'totoAtoto'\n");
	printf("|%c|A|moi\n", (unsigned char)ft_memchr(s481, 65, 6));
	printf("|%c|A|unix\n",   (unsigned char)memchr(s481, 65, 6));

	printf("Cherche '\\0' dans 'totoAtoto'\n");
	printf("|%c||moi  pour '\\0'\n", (unsigned char)ft_memchr(s481, '\0', 6));
	printf("|%c||unix pour '\\0'\n",    (unsigned char)memchr(s481, '\0', 6));

	str483 = ft_memchr(s482, 65, 9);
	str484 =    memchr(s482, 65, 9);
	printf("Ne trouve pas 'A' dans 'totoXtoto', renvoie NULL\n");
	printf("|%p|0x0|moi  pour NULL\n",  str483);
	printf("|%p|0x0|unix pour NULL\n",  str484);
*/

/*
	// ##############################
	ft_entete_exo(49, "ft_memcmp");
	// ##############################
*/

/*
	// ##############################
	ft_entete_exo(50, "ft_memcpy");
	// ##############################
*/

/*
	// ##############################
	ft_entete_exo(51, "ft_memdel");
	// ##############################
*/


/*
	// ##############################
	ft_entete_exo(52, "ft_memmove");
	// ##############################
*/


/*
	// ##############################
	ft_entete_exo(53, "ft_memset");
	// ##############################
	// ##############################				OK
	int		c53;
	size_t	len53;
	unsigned char	 b531[50] = "ma_tante_pue_des_pieds";
	unsigned char	b5310[50] = "ma_tante_pue_des_pieds";
	c53                       = 'a';
	len53                     = 9;
	printf("c  =%c\nlen=%lu\n%s\t(string initiale)\n", c53, len53, b531);
	ft_memset(b531,  c53, len53);
	memset(   b5310, c53, len53);
	printf("%s||moi\n", b531);
	printf("%s||unix\n\n", b5310);

	unsigned char	 b532[50] = "ma_tante_pue_des_pieds";
	unsigned char	b5320[50] = "ma_tante_pue_des_pieds";
	c53                       = 256;
	len53                     = 30;
	printf("c  =%d\nlen=%lu\n%s\t(string initiale)\n", c53, len53, b532);
	ft_memset(             b532,  c53, len53);
	memset(                b5320, c53, len53);
	printf("%s||moi\n",    b532);
	printf("%s||unix\n\n", b5320);

	unsigned char	 b533[50] = "ma_tante_pue_des_pieds";
	unsigned char	b5330[50] = "ma_tante_pue_des_pieds";
	c53                       = '\0';
	len53                     = 30;
	printf("c  =%d\nlen=%lu\n%s\t(string initiale)\n", c53, len53, b533);
	ft_memset(             b533,  c53, len53);
	memset(                b5330, c53, len53);
	printf("%s||moi\n",    b533);
	printf("%s||unix\n\n", b5330);
*/

/*
	// ##############################
	ft_entete_exo(54, "ft_putnbr_base");
	// ##############################
*/
/*
	// ##############################
	ft_entete_exo(55, "ft_bzero");
	// ##############################
	// ##############################				OK
	char	str551[] =  "toto5";
	char	str5510[] = "toto5";
	printf("n = 4|\n");
	printf("%s|%s|toto5|\tchaine initiale\n",     str551,    str5510);
	ft_bzero(str551, 4);
	bzero(str5510, 4);
	printf("%s|%s||\t<<chaine a zero\n",          str551,    str5510);
	printf("%d|%d|0|\t0eme valeur NUL\n",      str551[0], str5510[0]);
	printf("%c|%c|5|\t5eme caractere\n",          str551[4], str5510[4]);

	char	str552[] =  "012";
	char	str5520[] = "012";
	printf("\nn = 0|\n");
	printf("%s|%s|012|\tchaine initiale\n",       str552, str5520);
	ft_bzero(str552, 0);
	bzero(str5520, 0);
	printf("%s|%s|012|\t<<chaine non modifiee\n", str552, str5520);

	char	str553[] =  "toto5";
	char	str5530[] = "toto5";
	printf("\nn = 6|\n");
	printf("%s|%s|toto5|\tchaine initiale\n",     str553,    str5530);
	ft_bzero(str553, 6);
	bzero(str5530, 6);
	printf("%s|%s||\t<<chaine a zero\n",          str553,    str5530);
	printf("%c|%c||\t5eme caractere est '\\0'\n", str553[4], str5530[4]);
	printf("%d|%d|0|\t5eme valeur NUL\n",      str553[4], str5530[4]);
	printf("%d|%d|0|\t6eme valeur NUL\n",      str553[5], str5530[5]);

	char	str554[] =  "";
	char	str5540[] = "";
	printf("\nn = 1|\n");
	printf("%s|%s||\tchaine initiale vide\n",     str554,    str5540);
	ft_bzero(str554, 6);
	bzero(str5540, 6);
	printf("%s|%s||\t<<chaine a zero\n",          str554,    str5540);
	printf("%c|%c||\t0eme caractere est '\\0'\n", str554[0], str5540[0]);
	printf("%d|%d|0|\t0eme valeur NUL\n",         str554[0], str5540[0]);
*/

/*
	// ##############################
	ft_entete_exo(56, "ft_atoi");
	// ##############################
*/








	return (0);
}
