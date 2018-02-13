/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stk_rmall.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 23:41:16 by gcaron            #+#    #+#             */
/*   Updated: 2017/12/21 11:14:44 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
** ft_rmall() function delete all elements on the stack.
*/

void	ft_stk_rmall(t_stack **p)
{
	t_stack		*tmp;

	while (*p)
	{
		tmp = (*p)->next;
		free(*p);
		*p = tmp;
	}
}
