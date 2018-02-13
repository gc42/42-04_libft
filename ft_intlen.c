/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 21:56:38 by gcaron            #+#    #+#             */
/*   Updated: 2017/12/13 17:32:06 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Find number of digits used to write an integer. I use it in ft_itoa. The
** negative sign is significative in the result.
*/

int		ft_intlen(int n)
{
	int		nbr_digits;
	int		x;

	nbr_digits = 1;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		nbr_digits++;
		n = -n;
	}
	x = 1;
	while ((n / 10 / x) != 0)
	{
		x *= 10;
		nbr_digits++;
	}
	return (nbr_digits);
}
