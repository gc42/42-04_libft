/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 11:28:10 by gcaron            #+#    #+#             */
/*   Updated: 2017/11/30 18:28:50 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

/*
** man 3 strnstr
**
** The strnstr() function locates the first occurrence of the null-termi-
** nated string needle in the string haystack, where not more than len
** characters are searched.
** Characters that appear after a `\0' character are not searched.
**
** RETURN If needle is an empty string, haystack is returned;
** if needle occurs nowhere in haystack, NULL is returned;
** otherwise a pointer to the first character of the first occurrence
** of needle is returned.
*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;

	i = 0;
	while (i < len && haystack[i] == needle[i] && haystack[i] && needle[i])
		i++;
	if (needle[i] == '\0')
		return ((char *)haystack);
	if (haystack[i] == '\0' || len == 0 || i == len)
		return (NULL);
	return (ft_strnstr(haystack + 1, needle, len));
}
