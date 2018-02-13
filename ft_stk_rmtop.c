/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stk_rmtop.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 23:42:11 by gcaron            #+#    #+#             */
/*   Updated: 2017/12/21 11:15:18 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
** ft_rmtop() remove the last element on the stack and return its value.
*/

int		ft_stk_rmtop(t_stack **p)
{
	int			val;
	t_stack		*tmp;

	if (*p == NULL)
		return (-1);
	tmp = (*p)->next;
	val = (*p)->value;
	free(*p);
	*p = tmp;
	return (val);
}
