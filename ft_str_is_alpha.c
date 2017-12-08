/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 11:51:42 by gcaron            #+#    #+#             */
/*   Updated: 2017/12/07 03:39:00 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Return '1' if all characters of string 'str' given as argument are alpha.
** Else return '0'.
*/

int		ft_str_is_alpha(char *str)
{
	int		i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(('a' <= str[i] && str[i] <= 'z') \
			|| ('A' <= str[i] && str[i] <= 'Z')))
			return (0);
		i++;
	}
	return (1);
}
