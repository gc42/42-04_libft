/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 18:39:17 by gcaron            #+#    #+#             */
/*   Updated: 2017/11/29 09:13:25 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

/*
** man 3 bzero
**
** ft_bzero() -- write zeroes to a byte string
** writes n zeroed bytes to the string s.
** If n is zero, bzero() does nothing.
*/

void	ft_bzero(void *s, size_t n)
{
	if (n == 0)
		;
	while (n > 0)
	{
		*(char*)s++ = '\0';
		n--;
	}
}
