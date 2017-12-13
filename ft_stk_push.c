/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stk_push.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 21:02:46 by gcaron            #+#    #+#             */
/*   Updated: 2017/12/11 21:21:58 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
** ft_push() function add's an element on the stack.
*/

int		ft_stk_push(t_stack **p, int val)
{
	t_stack		*element;

	element = malloc(sizeof(t_stack));
	if (element == NULL)
		return (-1);
	element->value = val;
	element->prev = *p;
	*p = element;
	return (0);
}
