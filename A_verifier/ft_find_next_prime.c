/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 16:23:26 by gcaron            #+#    #+#             */
/*   Updated: 2017/09/14 12:29:28 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime_bis(int nb)
{
	int		div;

	div = 2;
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

int		ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	while (ft_is_prime_bis(nb) == 0)
	{
		nb = nb + 1;
	}
	return (nb);
}
