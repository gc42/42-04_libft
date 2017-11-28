/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 10:05:45 by gcaron            #+#    #+#             */
/*   Updated: 2017/11/24 17:24:15 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

/*
** man 3 STRLCPY
** strlcpy() function copy strings.
** take the full size of the buffer (not just the length) and guarantee
** to NUL-terminate the result (as long as size is larger than 0).
** (...see more in man)
** 
** The strlcpy() function copies up to size - 1 characters from
** the NUL-terminated string src to dst, NUL-terminating the result.
**
** See more and exemples in man.
*/

size_t		ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int	len_src;
	unsigned int	i;

	len_src = 0;
	while (src[len_src] != '\0')
		len_src++;
	i = 0;
	while (i < (size - 1) && src[i] != '\n')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len_src);
	//ATTENTION aux cast
	//voir pathname
}
