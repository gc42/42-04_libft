/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 09:33:33 by gcaron            #+#    #+#             */
/*   Updated: 2017/12/06 22:47:50 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

/*
** man 3 strNcmp
**
** strncmp() lexicographically compare on not more than n characters
** the null-terminated strings s1 and s2.
** Characters that appear after a `\0' character are not compared.
**
** RETURN (s1 - s2) as an integer s1 > s2, s1 = s2, s1 < s2.
**
** WARNING : if stopped by 'i < n', then i++ = n, need backward one character.
*/

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t		i;

	i = 0;
	while (i < n && s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	if (i != n)
		return ((int)((unsigned char)s1[i] - (unsigned char)s2[i]));
	else
	{
		return ((int)((unsigned char)s1[i - 1] - (unsigned char)s2[i - 1]));
	}
}
