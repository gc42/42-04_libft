/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 13:48:29 by gcaron            #+#    #+#             */
/*   Updated: 2017/12/12 14:14:33 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Walkthrough the list 'lst' and apply function 'f' on each element, then
** create a 'fresh' list with malloc(3) resulting of multi-applications of 'f'.
** RETURN if allocation fails, return NULL. Else, the new 'fresh' list.
*/

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*tmp;
	t_list		*lstnew;
	t_list		*result;

	lstnew = NULL;
	while (lst != NULL)
	{
		tmp = f(lst);
		if (lstnew == NULL)
		{
			lstnew = tmp;
			result = lstnew;
			lstnew->next = NULL;
		}
		else
		{
			lstnew->next = tmp;
			tmp->next = NULL;
			lstnew = lstnew->next;
		}
		lst = lst->next;
	}
	return (result);
}
