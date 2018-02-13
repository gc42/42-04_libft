/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 21:41:47 by gcaron            #+#    #+#             */
/*   Updated: 2017/12/11 22:18:52 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Return the absolute value of an integer.
** For INT_MIN value, ft_abs() returns INT_MIN value (no change).
*/

int		ft_abs(int nbr)
{
	if (nbr < 0 && nbr != -2147483648)
		return (-nbr);
	else
		return (nbr);
}
