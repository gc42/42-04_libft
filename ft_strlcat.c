/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 18:33:10 by gcaron            #+#    #+#             */
/*   Updated: 2017/11/30 17:17:04 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

/*
** man 3 STRLCAT
** strlcat -- size-bounded string concatenation
**
** The strlcat() function concatenate strings. More safer than strncat.
** strlcat() take the full size of the buffer (not just the length)
** and guarantee to NUL-terminate the result (as long as there is at least
** one byte free in dst).
** Note that a byte for the NUL should be included in size.
** Also note that strlcpy() only operate on true ``C'' strings.
**
** The strlcat() function appends the NUL-terminated string src to the end
** of dst.  It will append at most size - strlen(dst) - 1 bytes,
** NUL-terminating the result.
**
** RETURN The strlcat() function return the total length of the string they
** tried to create.
** For strlcat() that means the initial length of dst plus the length of src.
** While this may seem somewhat confusing, it was done to make truncation
** detection simple.
** Note however, that if strlcat() traverses size characters without finding
** a NUL, the length of the string is considered to be size and the destina-
** tion string will not be NUL-terminated (since there was no space for the
** NUL). This keeps strlcat() from running off the end of a string.  In
** practice this should not happen (as it means that either size is incorrect
** or that dst is not a proper ``C'' string).  The check exists to prevent
** potential security problems in incorrect code.
** (...see more in man page)
** => if size-1 <  dst then no space to work and return size + src
** => if size-1 >= dst then concatene and return dst + src
*/

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		len_dst;
	size_t		len_src;
	size_t		i;
	size_t		j;

	if (size == 0)
		return (0);
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if ((size - 1) < len_dst)
		return (size + len_src);
	if ((size - 1) >= len_dst)
	{
		i = 0;
		j = len_dst;
		while (i < ((size - 1) - len_dst) && src[i] != '\0')
			dst[j++] = src[i++];
		dst[j] = '\0';
	}
	return (len_dst + len_src);
}
