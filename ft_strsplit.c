/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 12:25:17 by gcaron            #+#    #+#             */
/*   Updated: 2017/12/13 18:35:18 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
** Allocate (with malloc(3)) and return a tab of "fresh" strings (all NULL-ter-
** minated by '\0', but also tab) resulting in cutting string 's' in `splits`
** delimited with character 'c'.
**
** RETURN If allocation fails, return NULL. Else, return the table of strings.
*/

static char		*ft_goto_next_word(char *str, char c, int i)
{
	char	*ptr;

	ptr = str;
	if (*ptr == c && i == 0)
	{
		while (*ptr == c && *ptr)
			ptr++;
	}
	if (i > 0)
	{
		while (*ptr != c && *ptr)
			ptr++;
		while (*ptr == c && *ptr)
			ptr++;
	}
	return (ptr);
}

static int		ft_word_len(char *ptr, char c)
{
	int		word_len;

	word_len = 0;
	while (ptr[word_len] != c && ptr[word_len] != '\0')
		word_len++;
	return (word_len);
}

static char		*ft_mem_word(char *ptr, int word_len)
{
	char	*ptr_mot;

	ptr_mot = ft_strnew(word_len);
	if (!ptr_mot)
		return (NULL);
	ptr_mot = ft_strncpy(ptr_mot, ptr, word_len);
	return (ptr_mot);
}

char			**ft_strsplit(char const *s, char c)
{
	char		**tab;
	char		*ptr_s;
	int			i;
	int			word_len;
	int			nbr_words;

	nbr_words = ft_str_cw(s, c);
	if (!(tab = (char**)malloc(sizeof(tab) * (nbr_words + 1))))
		return (NULL);
	if (nbr_words == 0)
	{
		tab[0] = NULL;
		return (tab);
	}
	ptr_s = (char*)s;
	i = 0;
	while (i < nbr_words)
	{
		ptr_s = ft_goto_next_word(ptr_s, c, i);
		word_len = ft_word_len(ptr_s, c);
		tab[i] = ft_mem_word(ptr_s, word_len);
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
