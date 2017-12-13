/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stk_clear.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 21:00:25 by gcaron            #+#    #+#             */
/*   Updated: 2017/12/11 22:22:55 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
** ft_clear() function delete all elements on the stack.
*/

void	ft_stk_clear(t_stack **p)
{
	t_stack		*tmp;

	while (*p)
	{
		tmp = (*p)->prev;
		free(*p);
		*p = tmp;
	}
}
