/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stk_rmtail.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 23:43:52 by gcaron            #+#    #+#             */
/*   Updated: 2017/12/21 11:15:04 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
** ft_stk_rmtail() function removes the tail element of the chain.
*/

int		ft_stk_rmtail(t_stack **p)
{
	int			val;
	t_stack		*tmp;
	t_stack		*before;

	if (*p == NULL)
		return (-1);
	tmp = *p;
	while (tmp->next)
	{
		before = tmp;
		tmp = tmp->next;
	}
	val = tmp->value;
	free(tmp);
	before->next = NULL;
	return (val);
}
