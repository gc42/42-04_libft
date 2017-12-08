/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_bases.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 15:14:24 by gcaron            #+#    #+#             */
/*   Updated: 2017/12/08 16:32:16 by gcaron           ###   ########.fr       */
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
void	ft_entete_exo(int numexo, char *s)
{
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
	ft_entete_exo(0, "ft_putnbr_base");
	// ##############################
	char	base16[] = "0123456789ABCDEF";
	ft_putnbr_base(0, base16);
	printf("|\n0|> 0 en b16\n");
	ft_putnbr_base(255, base16);
	printf("|\nFF|> 255 en b16\n");
	ft_putnbr_base(-255, base16);
	printf("|\n-FF|> 255 en b16\n");
	ft_putnbr_base(2147483647, base16);
	printf("|\n7FFFFFF|>2147483647  en b16\n");
	ft_putnbr_base(-2147483648, base16);
	printf("|\n-80000000|>2147483648  en b16\n");

	char	base2[] = "01";
	ft_putnbr_base(0, base2);
	printf("|\n0|> 0 en b2\n");
	ft_putnbr_base(255, base2);
	printf("|\n11111111|> 255 en b2\n");
	ft_putnbr_base(-255, base2);
	printf("|\n-11111111> 255 en b2\n");
	ft_putnbr_base(2147483647, base2);
	printf("|\n1111111111111111111111111111111|>2147483647  en b2\n");
	ft_putnbr_base(-2147483648, base2);
	printf("|\n-10000000000000000000000000000000|>2147483648  en b2\n");

	char	base81[] = "poneyvif";
	char	base8[] = "01234567";
	ft_putnbr_base(0, base8);
	printf("|\n0|> 0 en b8\n");
	ft_putnbr_base(0, base81);
	printf("|\np|> 0 en poneyvif\n");

	ft_putnbr_base(255, base8);
	printf("|\n377|> 255 en b8\n");
	ft_putnbr_base(255, base81);
	printf("|\neff|> 255 en poneyvif\n");

	ft_putnbr_base(-255, base8);
	printf("|\n-377|> 255 en b8\n");
	ft_putnbr_base(-255, base81);
	printf("|\n-eff|> 255 en poneyvif\n");

	ft_putnbr_base(2147483647, base8);
	printf("|\n17777777777|>  en b8\n");
	ft_putnbr_base(2147483647, base81);
	printf("|\noffffffffff|>  en poneyvif\n");

	ft_putnbr_base(-2147483648, base8);
	printf("|\n-20000000000|>2147483648  en b8\n");
	ft_putnbr_base(-2147483648, base81);
	printf("|\n-npppppppppp|>2147483648  en poneyvif\n");

	char	baseFAIL01[] = "";
	ft_putnbr_base(0, baseFAIL01);
	printf("||> FAIL base vide\n");

	char	*baseFAIL02 = NULL;
	ft_putnbr_base(0, baseFAIL02);
	printf("||> FAIL base NULL\n");

	char	baseFAIL03[] = "'\0'";
	ft_putnbr_base(0, baseFAIL03);
	printf("||> FAIL base avec que des \\0\n");

	char	baseFAIL04[] = "p";
	ft_putnbr_base(0, baseFAIL04);
	printf("||> FAIL base 1\n");

	char	baseFAIL05[] = "'\n'";
	ft_putnbr_base(0, baseFAIL05);
	printf("||> FAIL base avec non graph\\n\n");

	char	baseFAIL06[] = " ";
	ft_putnbr_base(0, baseFAIL06);
	printf("||> FAIL base avec non graph ' '\n");
*/




	// ##############################
	ft_entete_exo(1, "ft_atoi_base");
	// ##############################
/*
	//TEST DE LA BASE
	char	str01[] = "ok";
	char	baseFAIL01[] = "";
	ft_putnbr(ft_atoi_base(str01, baseFAIL01));
	printf("|0|> FAIL base vide\n");

	char	*baseFAIL02 = NULL;
	ft_putnbr(ft_atoi_base(str01, baseFAIL02));
	printf("|0|> FAIL base NULL\n");

	char	baseFAIL03[] = "'\0'";
	ft_putnbr(ft_atoi_base(str01, baseFAIL03));
	printf("|0|> FAIL base avec que des \\0\n");

	char	baseFAIL04[] = "p";
	ft_putnbr(ft_atoi_base(str01, baseFAIL04));
	printf("|0|> FAIL base 1\n");

	char	baseFAIL05[] = "'\n'";
	ft_putnbr(ft_atoi_base(str01, baseFAIL05));
	printf("|0|> FAIL base avec non graph\\n\n");

	char	baseFAIL06[] = " ";
	ft_putnbr(ft_atoi_base(str01, baseFAIL06));
	printf("|0|> FAIL base avec non graph ' '\n");

	char	baseFAIL07[] = "0+1";
	ft_putnbr(ft_atoi_base(str01, baseFAIL07));
	printf("|0|> FAIL base avec '+'\n");

	char	baseFAIL08[] = "0-1";
	ft_putnbr(ft_atoi_base(str01, baseFAIL08));
	printf("|0|> FAIL base avec '-'\n");
	printf("\n");
*/


/*
	//TEST DES LA STRING
	char	base01[] = "0123456789";
	char	strFAIL01[] = "";
	ft_putnbr(ft_atoi_base(strFAIL01, base01));
	printf("|0|> FAIL str vide\n");

	char	strFAIL02[] = "abcd";
	ft_putnbr(ft_atoi_base(strFAIL02, base01));
	printf("|0|> FAIL str hors base\n");

	char	*strFAIL03 = NULL;
	ft_putnbr(ft_atoi_base(strFAIL03, base01));
	printf("|0|> FAIL str NULL\n");
	printf("\n");
*/


	//TEST VALEURS
	char	base02[] = "0123456789";
	char	str02[] = "+2";
	ft_putnbr(ft_atoi_base(str02, base02));
	printf("|10|> +2 en base 2 \n");














	return (0);
}
