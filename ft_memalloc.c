/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 18:53:36 by gcaron            #+#    #+#             */
/*   Updated: 2017/12/04 08:42:45 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*
** Allocate with malloc(3) and return a "fresh" memory zone of 'size' octets.
** The allocated memory is initiasided at 0. If allocation failed,
** function return NULL.
** RETURN : If allocation failed, return NULL. Else, the allowed memory zone.
*/

void	*ft_memalloc(size_t size)
{
	void			*fresh;
	unsigned char	*tmp;

	fresh = malloc(size);
	if (fresh == NULL)
		return (NULL);
	tmp = (unsigned char*)fresh;
	while (size-- > 0)
		*tmp++ = 0;
	return ((void*)fresh);
}
