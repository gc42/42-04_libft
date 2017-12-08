/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ctoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/08 13:47:38 by gcaron            #+#    #+#             */
/*   Updated: 2017/12/08 14:11:30 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Convert a character (i-e ASCII index) in corresponding integer in range
** '0123456789' then 'abcdefghijklmnopqrstuvwxyz' or
** 'ABCDEFGHIJKLMNOPQRSTUVWXYZ.
** Can be used in base convertions such as ft_atoi_base from a base to base 10.
**
** RETURN the corresponding index in ASCII table
*/

int		ft_ctoi(char c)
{
	if ('0' <= c && c <= '9')
		return (c - '0');
	if ('a' <= c && c < 'z')
		return (c - 'a' + 10);
	if ('A' <= c && c < 'Z')
		return (c - 'A' + 10);
	return (-1);
}
