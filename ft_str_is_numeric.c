/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 12:56:38 by gcaron            #+#    #+#             */
/*   Updated: 2017/12/21 15:39:52 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

/*
** Return '1' if all characters of string 'str' given as argument
** are numerics.
** Else return '0'.
*/

int		ft_str_is_numeric(char *str)
{
	int		i;

	i = 0;
	if (str == NULL || str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!('0' <= str[i] && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}
