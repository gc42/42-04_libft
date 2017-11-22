/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 14:53:12 by gcaron            #+#    #+#             */
/*   Updated: 2017/11/22 16:55:58 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

/*
** Fill a memory zone with given octet
*/

void	*memset(void *s, int c, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
		*(s + i) = c;
}
