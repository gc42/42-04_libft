/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stk_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 21:03:35 by gcaron            #+#    #+#             */
/*   Updated: 2017/12/21 17:21:23 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_view() print values of all elements ont the stack.
*/

void	ft_stk_print(t_stack *p)
{
	while (p)
	{
		ft_putnbr(p->value);
		ft_putstr(" > ");
		p = p->next;
	}
	ft_putstr("NULL\n");
}
