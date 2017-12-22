/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stk_insert.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/20 14:10:37 by gcaron            #+#    #+#             */
/*   Updated: 2017/12/21 17:20:28 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
** ft_stk_insert() function can insert a new element just after current one
** The stack list is simple chained (sll for single linked list),
** typed as LIFO
*/

int			ft_stk_insert(t_stack **p, int n)
{
	t_stack		*new;

	new = malloc(sizeof(t_stack));
	if (new == NULL)
		return (-1);
	new->value = n;
	if (*p == NULL)
	{
		new->next = *p;
		*p = new;
	}
	else
	{
		new->next = (*p)->next;
		(*p)->next = new;
	}
	return (n);
}
