/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stk_print_stk.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 21:03:35 by gcaron            #+#    #+#             */
/*   Updated: 2017/12/11 21:29:55 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_view() print values of all elements ont the stack.
*/

void	ft_stk_printstk(t_stack *p)
{
	while (p)
	{
		ft_putnbr(p->value);
		ft_putchar('\n');
		p = p->prev;
	}
}
