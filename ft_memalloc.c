/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 18:53:36 by gcaron            #+#    #+#             */
/*   Updated: 2017/11/28 17:34:25 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*
** Allocate with malloc(3) and return a "fresh" memory zone.
** The allocated memory is initiasided at 0. If allocation
** failed, function return NULL.
** RETURN : the allowed memory.
*/

void	*ft_memalloc(size_t size)
{
	void	*fresh;
/*
	fresh = malloc(size + 1);
	if (fresh == NULL)
		return (NULL);
	while (size >= 0)
		*fresh = 0;  // A TERMINER:w
*/
	return (fresh);
}
