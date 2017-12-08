/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 12:19:37 by gcaron            #+#    #+#             */
/*   Updated: 2017/12/08 12:42:16 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Convert an integer in corresponding character in range '123456789' then
** 'abcdefghijklmnopqrstuvwxyz'. Can be used in base convertions such as 
** ft_atoi_base from a base to base 10.
**
** RETURN the corresponding index in ASCII table
*/

int		ft_itoc(int i)
{
	if (0 <= i && i <= 9)
		return (i + '0');
	if (10 <= i && i < 36)
		return (i + 'a' - 10);
	return (i);
}
