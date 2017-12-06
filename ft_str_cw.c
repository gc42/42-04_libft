/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_count_words.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/04 14:47:26 by gcaron            #+#    #+#             */
/*   Updated: 2017/12/04 17:10:01 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

/*
** Function ft_strcw() counts number of 'words' in 's' ising 'c' as separator.
**
** RETURN ft_strcw() returns 0 if 's' is empty, or return the number
** of words find in 's'. The string 's' must be a valid string, NUL terminated.
*/

int		ft_str_cw(char const *s, char c)
{
	size_t		i;
	size_t		nbr_words;

	if (s == NULL)
		return (0);
	if (*s == '\0')
		return (0);
	nbr_words = 0;
	i = 0;
	if (s[0] != c)
		nbr_words++;
	while (s[i + 1])
	{
		if (s[i] == c && s[i + 1] != c)
			nbr_words++;
		i++;
	}
	return (nbr_words);
}
