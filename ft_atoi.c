/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 00:43:59 by gcaron            #+#    #+#             */
/*   Updated: 2017/12/13 17:05:33 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	unsigned int			i;
	long long int			sign;
	unsigned long long int	atoi;

	i = 0;
	atoi = 0;
	if (str[0] == '\0')
		return (0);
	while (ft_isspace(str[i]))
		i++;
	sign = (str[i] == '-' ? -1 : 1);
	i += (str[i] == '-' ? 1 : 0);
	if (str[i] == '+' && sign == 1)
		i++;
	while ('0' <= str[i] && str[i] <= '9')
	{
		atoi = (atoi * 10) + (str[i] - '0');
		if ((atoi >= 9223372036854775807 && sign > 0)
			|| (atoi > 9223372036854775807 && sign < 0))
			return (sign > 0 ? -1 : 0);
		i++;
	}
	return ((int)(atoi * sign));
}
