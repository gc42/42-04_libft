/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 13:34:24 by gcaron            #+#    #+#             */
/*   Updated: 2017/12/12 13:08:39 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
** Take as argument the address of a pointer to an element, and free memory of
** this element and all next elements, one after one, with the 'del' function
** passed as argument and free(3).
** To finish, the pointer to the first element now liberated must be set
** to NULL (such as ft_memdel).
** RETURN nothing
*/

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list		*element_to_delete;
	t_list		*tmp_next;

	element_to_delete = *alst;
	while (element_to_delete)
	{
		tmp_next = element_to_delete->next;
		del(element_to_delete->content, element_to_delete->content_size);
		free(element_to_delete);
		element_to_delete = tmp_next;
	}
	*alst = NULL;
}
