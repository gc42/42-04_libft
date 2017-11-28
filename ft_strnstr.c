/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 11:28:10 by gcaron            #+#    #+#             */
/*   Updated: 2017/11/27 11:35:54 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	return (0);
	// A TERMINER
}
