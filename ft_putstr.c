/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 14:34:20 by gcaron            #+#    #+#             */
/*   Updated: 2017/11/29 18:12:30 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

/*
**
*/

void	ft_putstr(char const *s)
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		ft_putchar(s[i]);	// VERIFIER si reecrire avec write et ft_strlen
		i++;
	}
}
