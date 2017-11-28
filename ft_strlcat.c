/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 18:33:10 by gcaron            #+#    #+#             */
/*   Updated: 2017/11/24 16:17:13 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

/*
** man 3 STRLCPY
** strlcat -- size-bounded string copying and concatenation
**
** The strlcat() function concatenate strings. More safer than strncat.
** strlcat() take the full size of the buffer (not just the length)
** and guarantee to NUL-terminate the result (as long as there is at least
** one byte free in dst).
** Note that a byte for the NUL should be included in size.
** Also note that strlcpy() and strlcat() only operate on true ``C'' strings.
** (...see more in man page)
*/

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		len_dst;
	size_t		len_src;
	size_t		i;
	size_t		j;

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
	//VERIFIER protection size == 0
	//VERIFIER pathname (voir man)
	//VOIR exemples dans le man
}
