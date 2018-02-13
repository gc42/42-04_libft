/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrtplus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 12:22:35 by gcaron            #+#    #+#             */
/*   Updated: 2018/01/05 17:32:21 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Find the 'racine carre entiere' of a given integer passed as argument, or,
** if not finded the exact value, return the stop  value + 1. Usfull to find
** the square contained a given number of cases.
*/

int		ft_sqrtplus(int nb)
{
	int	racin;

	if (nb < 0)
		return (0);
	if (nb == 1)
		return (1);
	racin = 1;
	while ((racin * racin) <= nb)
	{
		if ((racin * racin) == nb)
			return (racin);
		racin++;
	}
	return (racin + 1);
}
