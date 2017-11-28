/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/14 14:29:55 by gcaron            #+#    #+#             */
/*   Updated: 2017/11/27 10:57:51 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

/*
** man 3 strNcpy
** strncpy() -- copy strings
**
** Copy at most 'len' characters from 'src' into 'dst'.
** If 'src' is less than 'len' characters long, the remainder
** of 'dst' is filled with `\0' characters.
** Otherwise, dst is not terminated.  !!!!!!!!!!!!!  ATTENTION  !!!
**
** The src and dest strings should not overlap, as the behavior is undefined.
**
** RETURN 'dst'
*/

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	unsigned int	i;

	i = 0;
	while (i < len && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	while (i < len)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}
