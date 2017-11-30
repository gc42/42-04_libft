/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 11:36:11 by gcaron            #+#    #+#             */
/*   Updated: 2017/11/30 17:47:51 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
** The strrchr() function locates the last occurrence of 'c' (converted to
** a char) in the string pointed to by 's'.
** The terminating NUL character is considered to be part of the string;
** therefore if 'c' is `\0', the function locate the terminating `\0'.
**
** RETURN The function strrchr() return a pointer to the located character,
** or NULL if the character does not appear in the string.
*/

char	*ft_strrchr(const char *s, int c)
{
	size_t		len;

	len = ft_strlen(s);
	s = s + len;
	while (len && *s != (unsigned char)c)
	{
		s--;
		len--;
	}
	if (len > 0)
		return ((char*)s);
	return (NULL);
}
