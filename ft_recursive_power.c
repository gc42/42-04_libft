/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/15 13:22:20 by gcaron            #+#    #+#             */
/*   Updated: 2017/12/15 13:40:00 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_recursive_power() function returns 'nb' power 'power'.
** RETURN :
** if power is negative return '0'
** if 'nb == 0' and 'power != 0', return '0'
** if power == 0, return '1'
** else, return result of 'nb' power 'power'. !! If the value is greater than
** val of INT_MAX, the result is % INT_MIN->INT_MAX.
*/

int		ft_recursive_power(int nb, int power)
{
	if (power < 0 || (nb == 0 && power != 0))
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
