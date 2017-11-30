/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 08:58:59 by gcaron            #+#    #+#             */
/*   Updated: 2017/11/30 16:22:35 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

/*
** The memcmp() function compares byte string s1 against byte string s2.
** Both strings are assumed to be n bytes long.
** RETURN:The memcmp() function returns zero if the two strings are identical,
** otherwise returns the difference between the first two differing bytes
** (treated as unsigned char values, so that `\200' is greater than `\0',
** for example).  Zero-length strings are always identical.  This behav-
** ior is not required by C and portable code should only depend on the
** sign of the returned value.
*/

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char*)s1;
	str2 = (unsigned char*)s2;
	while (n && *str1 == *str2)
	{
		str1++;
		str2++;
		n--;
	}
	if (n == 0)
		return (0);
	else
		return (*str1 - *str2);
}
