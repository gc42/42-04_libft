/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 09:27:21 by gcaron            #+#    #+#             */
/*   Updated: 2017/12/06 19:56:50 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

/*
** memmove -- copy byte string
** See man MEMMOVE (3)
**
** The memmove() function copies len bytes from string src to string dst.
** The two strings may overlap; the copy is always done in a non-destructive
** manner.
**
** RETURN: The memmove() function returns the original value of dst.
*/

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*str_dst;
	unsigned char	*str_src;
	size_t			n;

	str_dst = (unsigned char*)dst;
	str_src = (unsigned char*)src;
	if (str_src < str_dst)
	{
		n = len;
		str_src = str_src + len - 1;
		str_dst = str_dst + len - 1;
		while (n--)
			*str_dst-- = *str_src--;
	}
	else if (str_src > str_dst)
	{
		n = 0;
		while (n++ < len)
			*str_dst++ = *str_src++;
	}
	return (dst);
}
