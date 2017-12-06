/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_str_cw.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 15:14:24 by gcaron            #+#    #+#             */
/*   Updated: 2017/12/05 18:08:08 by gcaron           ###   ########.fr       */
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

static char		*ft_goto_next_word2(char *str, char c)
{
	char	*ptr;

	ptr = str;
	if (*ptr == c)
	{
		while (*ptr == c && *ptr)
			ptr++;
	}
	else
	{
		while (*ptr != c && *ptr)
			ptr++;
		while (*ptr == c && *ptr)
			ptr++;
	}
	printf("verif:%s\n", ptr);
	return (ptr);
}

static int		ft_word_len2(char *ptr, char c)
{
	int		word_len;

	while (ptr[word_len] != c && ptr[word_len] != '\0')
		word_len++;
	return (word_len);
}

static char		*ft_mem_word2(char *ptr, int word_len)
{
	char	*mot;

	if (!(mot = ft_strnew(word_len)))
		return (NULL);
	mot = ft_strncpy(mot, ptr, word_len);
	return (mot);
}




// MAIN MAIN MAIN MAIN MAIN ###################
int		main(void)
{
	//EFFACER L'ECRAN
	printf("\033[H\033[2J");

/*
	// ##############################
	ft_entete_exo(0, "ft_str_cw");
	// ##############################
	char	*str01 = "XooooXooooXoooo";
	printf("%d|3|\t>> nbre de mots dans %s\n", ft_str_cw(str01, 'X'), str01);

	char	*str02 = "XXXooooXXXXXooooXooooXXX";
	printf("%d|3|\t>> nbre de mots dans %s\n", ft_str_cw(str02, 'X'), str02);

	char	*str03 = "XXXXXX";
	printf("%d|0|\t>> nbre de mots dans %s\n", ft_str_cw(str03, 'X'), str03);

	char	*str04 = "ooo";
	printf("%d|1|\t>> nbre de mots dans %s\n", ft_str_cw(str04, 'X'), str04);

	char	*str05 = "";
	printf("%d|0|\t>> nbre de mots dans %s\n", ft_str_cw(str05, 'X'), str05);

	char	*str06 = NULL;
	printf("%d|0|\t>> nbre de mots dans %s\n", ft_str_cw(str06, 'X'), str06);
*/

	// ##############################
	ft_entete_exo(1, "ft_strtrim");
	// ##############################
	char	str11[]   = "XXXaaaaXXbbbbbXXXccccccXX";
	char	*tmp;
	char	*mot;
	int			wlen;

//	tmp = str11;
	printf("%s|\t>> \n", str11);
/*
	printf("%s|\t>> \n", tmp);
	tmp = ft_goto_next_word2(tmp, 'X');
	printf("%s|\t>>1 \n\n", tmp);
	wlen = ft_word_len2(tmp, 'X');
	printf("%d\n", wlen);

	tmp = ft_goto_next_word2(tmp, 'X');
	printf("%s|\t>>2 \n", tmp);
	wlen = ft_word_len2(tmp, 'X');
	printf("%d\n", wlen);

	tmp = ft_goto_next_word2(tmp, 'X');
	printf("%s|\t>>3 \n", tmp);
	wlen = ft_word_len2(tmp, 'X');
	printf("%d\n", wlen);

	mot = ft_mem_word2(tmp, wlen);
	printf("%s (dans mot)\n", mot);
*/

	// ##############################
	ft_entete_exo(2, "ft_strtrim");
	// ##############################
	char	str21[]   = "XXXaaaaXXbbbbbXXXccccccXX";
	char	**test;
	
	printf("%s|\t>> \n", str21);
	test = ft_strsplit(str21, 'X');
	printf("%s|%s|%s|%s\n\n", test[0], test[1], test[2], test[3]);

	char	str22[]   = "aaaaXXbbbbbXXXccccccXX";
	printf("%s|\t>> \n", str22);
	test = ft_strsplit(str22, 'X');
	printf("%s|%s|%s|%s\n\n", test[0], test[1], test[2], test[3]);

	char	str23[]   = "aaaabbbbbcccccc";
	printf("%s|\t>> \n", str23);
	test = ft_strsplit(str23, 'X');
	printf("%s|%s|\n\n", test[0], test[1]);

	char	str24[]   = "XXXXXX";
	printf("%s|\t>> \n", str24);
	test = ft_strsplit(str24, 'X');
	printf("%s|\n\n", test[0]);

	char	str25[]   = "";
	printf("%s|\t>> \n", str25);
	test = ft_strsplit(str25, 'X');
	printf("%s|\n\n", test[0]);

	char	*str26 = NULL;
	printf("%s|\t>> \n", str26);
	test = ft_strsplit(str26, 'X');
	printf("%s|\n\n", test[0]);








	return (0);
}
