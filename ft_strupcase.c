/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 09:49:58 by gcaron            #+#    #+#             */
/*   Updated: 2017/12/07 03:31:51 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Switch all alpha characters in uppercase.
*/

char	*ft_strupcase(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if ('a' <= str[i] && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
