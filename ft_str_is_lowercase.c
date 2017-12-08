/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 13:24:53 by gcaron            #+#    #+#             */
/*   Updated: 2017/12/07 03:38:50 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Return '1' if all characters of string 'str' given as argument
** are in lowercase.
** Else return '0'.
*/

int		ft_str_is_lowercase(char *str)
{
	int		i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!('a' <= str[i] && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}
