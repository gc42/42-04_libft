/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 15:12:42 by gcaron            #+#    #+#             */
/*   Updated: 2017/12/07 03:38:26 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Return '1' if all characters of string 'str' given as argument
** are printable characters.
** Else return '0'.
*/

int		ft_str_is_printable(char *str)
{
	int		i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(' ' <= str[i] && str[i] <= '~'))
			return (0);
		i++;
	}
	return (1);
}
