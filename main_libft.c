/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_libft.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 18:25:05 by gcaron            #+#    #+#             */
/*   Updated: 2017/11/22 23:40:06 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// LIBRAIRIES STANDARD
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// LIBRAIRIE
//#include "libft.h"

// LIENS VERS LES EXERCICES
#include "ft_strlen.c"
#include "ft_strcat.c"
#include "ft_isascii.c"
#include "ft_islower.c"
#include "ft_isupper.c"
#include "ft_isdigit.c"
#include "ft_isalpha.c"
#include "ft_isalnum.c"

/*
// PROTOTYPES DES FONCTIONS
size_t	ft_strlen(const char *str);
char	*ft_strcat(char *dest, const char *src);
int		ft_isdigit(int c);
int		ft_isascii(int c);
int		ft_isalnum(int c);
int		ft_isupper(int c);
int		ft_islower(int c);
int		ft_isalpha(int c);
int		ft_isalnum(int c);
*/


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
	ft_entete_exo(1, "ft_strlen");
	// ##############################
	char	*s11 = "0123456789";
	char	*s12 = "abc";
	char	*s13 = "";
	printf("%zu|10 attendu\n", ft_strlen(s11));
	printf("%zu|3 attendu\n", ft_strlen(s12));
	printf("%zu|0 attendu\n", ft_strlen(s13));
*/
/*
	// ##############################
	ft_entete_exo(2, "ft_strcat");
	// ##############################
	char	*s21 = "012";
	char	*s22 = "abc";
	char	*s23 = "";
	printf("%s|unix\n", strcat(s21, s22));
//	printf("%s|012abc attendu\n", ft_strcat(s21, s22));
//	printf("%s|abc012 attendu\n", ft_strcat(s22, s21));
//	printf("%s|abc attendu\n",    ft_strcat(s23, s22));
*/

/*
	// ##############################
	ft_entete_exo(3, "ft_isupper");
	// ##############################
	printf("ft|unix|attendu pour valeur\n");
	printf("%d|1 attendu pour A\n", isupper('A'));
	printf("%d|1 attendu pour Z\n", isupper('Z'));
	printf("%d|0 attendu pour b\n", isupper('b'));
	printf("%d|0 attendu pour 127\n", isupper(127));
	printf("%d|1 attendu pour 65\n", isupper(65));
	printf("%d|0 attendu pour 320\n", isupper(320));
*/
/*
	// ##############################
	ft_entete_exo(4, "ft_ascii");
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
*/
/*
	// ##############################
	ft_entete_exo(5, "ft_islower");
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
*/
/*
	// ##############################
	ft_entete_exo(6, "ft_isdigit");
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
*/
/*
	// ##############################
	ft_entete_exo(7, "ft_isalpha");
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
*/

	// ##############################
	ft_entete_exo(8, "ft_isalnum");
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















	return (0);
}
