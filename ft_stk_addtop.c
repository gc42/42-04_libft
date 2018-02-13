/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stk_addtop.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 23:40:43 by gcaron            #+#    #+#             */
/*   Updated: 2017/12/21 11:13:51 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
** ft_addtop() function add's an element on the stack.
*/

int		ft_stk_addtop(t_stack **p, int n)
{
	t_stack		*element;

	element = malloc(sizeof(t_stack));
	if (element == NULL)
		return (-1);
	element->value = n;
	element->next = *p;
	*p = element;
	return (n);
}
