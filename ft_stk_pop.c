/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stk_pop.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 21:02:04 by gcaron            #+#    #+#             */
/*   Updated: 2017/12/11 21:21:09 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
** ft_pop() remove the last element on the stack and return its value.
*/

int		ft_stk_pop(t_stack **p)
{
	int			val;
	t_stack		*tmp;

	if (*p == NULL)
		return (-1);
	tmp = (*p)->prev;
	val = (*p)->value;
	free(*p);
	*p = tmp;
	return (val);
}
