/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stk_addtail.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/20 15:46:01 by gcaron            #+#    #+#             */
/*   Updated: 2017/12/21 11:13:35 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
** ft_addtail() function add a new element at the tail of the chain.
*/

int		ft_stk_addtail(t_stack **p, int n)
{
	t_stack		*new;
	t_stack		*tmp;

	new = malloc(sizeof(t_stack));
	if (new == NULL)
		return (-1);
	new->value = n;
	new->next = NULL;
	if (*p == NULL)
		*p = new;
	else
	{
		tmp = *p;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
	}
	return (n);
}
