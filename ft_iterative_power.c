/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/11 10:05:25 by gcaron            #+#    #+#             */
/*   Updated: 2017/12/07 03:28:33 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Find the power of a given number. Both number and power are passed as
** arguments. RETURN the power result as an integer.
*/

int		ft_iterative_power(int nb, int power)
{
	unsigned int	i;
	unsigned int	result;

	if (power < 0 || (nb == 0 && power != 0))
		return (0);
	if (power == 0)
		return (1);
	i = 1;
	result = 1;
	while (i <= power)
	{
		result = result * nb;
		i++;
	}
	return (result);
}
