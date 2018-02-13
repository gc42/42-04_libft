/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 08:53:45 by gcaron            #+#    #+#             */
/*   Updated: 2017/11/29 19:20:58 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

/*
** The memchr() function locates the first occurrence of c (converted to
** an unsigned char) in string s.
** RETURN: The memchr() function returns a pointer to the byte located,
** or NULL if no such byte exists within 'n' bytes.
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char*)s;
	while (n > 0 && *str != (unsigned char)c)
	{
		str++;
		n--;
	}
	if (n != 0)
		return ((void*)str);
	return (NULL);
}
