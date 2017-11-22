/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iscntrl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 21:04:52 by gcaron            #+#    #+#             */
/*   Updated: 2017/11/21 21:52:15 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** List of control characters in ascii table
*/
int		ft_iscntrl(int c)
{
	if ((0 <= c && c <= 31) || (c == 127))
		return (c);
	else
		return (0);
}
