/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stk_rmnext.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/21 13:42:50 by gcaron            #+#    #+#             */
/*   Updated: 2017/12/21 13:59:34 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
** ft_stk_rmnext() function remove next element of the single linked list (sll)
*/

int		ft_stk_rmnext(t_stack **p)
{
	int			val;
	t_stack		*tmp;

	if ((*p)->next == NULL)
		return (-1);
	val = (*p)->next->value;
	tmp = (*p)->next;
	(*p)->next = tmp->next;
	free(tmp);
	return (val);
}
