/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/22 09:55:19 by gcaron            #+#    #+#             */
/*   Updated: 2017/12/06 20:50:19 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Print string 's' on file descriptor 'fd'
** followed by '\n'.
*/

void	ft_putendl_fd(char const *s, int fd)
{
	if (s)
	{
		while (*s)
			ft_putchar_fd(*s++, fd);
		ft_putchar_fd('\n', fd);
	}
}
