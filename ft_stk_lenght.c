/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stk_lenght.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 21:01:26 by gcaron            #+#    #+#             */
/*   Updated: 2017/12/21 11:14:19 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_lenght() return the number of elements in the stack.
*/

int		ft_stk_lenght(t_stack *p)
{
	int		n;

	n = 0;
	while (p)
	{
		n++;
		p = p->next;
	}
	return (n);
}
