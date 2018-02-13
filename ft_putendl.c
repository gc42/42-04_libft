/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 09:57:40 by gcaron            #+#    #+#             */
/*   Updated: 2017/12/06 20:47:01 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Print string 's' on standard output followed by '\n'
*/

void	ft_putendl(char const *s)
{
	if (s)
	{
		while (*s)
			ft_putchar(*s++);
		ft_putchar('\n');
	}
}
