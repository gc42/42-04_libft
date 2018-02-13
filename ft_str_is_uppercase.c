/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 13:42:58 by gcaron            #+#    #+#             */
/*   Updated: 2017/12/21 15:40:58 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

/*
** Return '1' if all characters of string 'str' given as argument
** are all in uppercase.
** Else return '0'.
*/

int		ft_str_is_uppercase(char *str)
{
	int		i;

	i = 0;
	if (str == NULL || str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!('A' <= str[i] && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}
