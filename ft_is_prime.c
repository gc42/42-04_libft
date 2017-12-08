/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 14:01:44 by gcaron            #+#    #+#             */
/*   Updated: 2017/12/07 02:17:17 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** GC ft_is_prime() function takes an integer in argument and verify is it
** is a prime.
**
** RETURN 1 if it is a prime, else return o.
*/

int		ft_is_prime(int nb)
{
	int		div;

	div = 2;
	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	if ((nb > 7) && !(nb % 2 || nb % 3 || nb % 5 || nb % 7))
		return (0);
	while (div <= nb / div)
	{
		if (nb % div == 0)
			return (0);
		div = div + 1;
	}
	return (1);
}
