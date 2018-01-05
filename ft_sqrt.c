/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 12:22:35 by gcaron            #+#    #+#             */
/*   Updated: 2018/01/05 17:31:21 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Find racine carre entiere of a given integer passed as argument.
*/

int		ft_sqrt(int nb)
{
	int	racin;

	if (nb < 0 || 2147395600 < nb)
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
	return (0);
}
