/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/29 09:17:51 by gcaron            #+#    #+#             */
/*   Updated: 2017/11/29 14:29:10 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

/*
** man 3 memset
** memset -- fill a byte string with a byte value
**
** The memset() function writes len bytes of value c (converted to an
** unsigned char) to the string b.
**
** RETURN The memset() function returns its first argument.
*/

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*tmp_b;

	tmp_b = (unsigned char*)b;
	while (len-- > 0)
		*tmp_b++ = (unsigned char)c;
	return (b);
}
