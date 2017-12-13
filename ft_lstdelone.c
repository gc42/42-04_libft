/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 13:24:38 by gcaron            #+#    #+#             */
/*   Updated: 2017/12/12 14:13:59 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
** Take as parameter the address of a pointer to an element of the chain,
** and (1) free the memory of the content of the element with function 'del'
** passed as parameter, then (2) free memory of the element him self with
** free(3). Memory of field 'next' never must bee free. To terminate, the
** pointer must be redirected to NULL (such as ft_memdel).
** RETURN nothing.
*/

void	ft_lstdelone(t_list **alst, void (*del)(void*, size_t))
{
	if (alst == NULL || *alst == NULL)
		return ;
	if (del != NULL)
		del((*alst)->content, (*alst)->content_size);
	free(*alst);
	*alst = NULL;
}
