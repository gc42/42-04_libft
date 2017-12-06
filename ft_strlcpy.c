/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 10:05:45 by gcaron            #+#    #+#             */
/*   Updated: 2017/12/04 08:10:36 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

/*
** man 3 STRLCPY
** strlcpy() function copy strings.
** Take the full size of the buffer and guarantee to NUL-terminate the result
** as long as there is at least one byte free in dst. Note that a byte for the
** NUL should be included in size. Also note that strlcpy() only operate on
** true ``C'' strings.  This means that src must be NUL-terminated.
**
** The strlcpy() function copies up to size - 1 characters from
** the NUL-terminated string src to dst, NUL-terminating the result.
**
** The source and destination strings should not overlap, as the behavior is
** undefined.
**
** RETURN The strlcpy() functions return the total length of the string they
** tried to create. For strlcpy() that means the length of src.
** See more and exemples in man.
*/

size_t		ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t		len_src;
	size_t		i;

	len_src = 0;
	while (src[len_src] != '\0')
		len_src++;
	i = 0;
	while (i < (size - 1) && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len_src);
}
