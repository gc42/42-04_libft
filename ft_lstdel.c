/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 13:34:24 by gcaron            #+#    #+#             */
/*   Updated: 2017/12/21 15:28:49 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	t_list	*tmp_next;

	while (*alst)
	{
		tmp_next = (*alst)->next;
		ft_lstdelone(alst, del);
		*alst = tmp_next;
	}
}
