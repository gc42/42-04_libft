/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 13:22:55 by gcaron            #+#    #+#             */
/*   Updated: 2017/11/21 21:55:44 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** List of printable characters in standard ascii table
*/
int		ft_isprint(int c)
{
	if (' ' <= c && c <= '~')
		return (c);
	else
		return (0);
}
