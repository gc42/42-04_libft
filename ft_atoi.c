/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 00:43:59 by gcaron            #+#    #+#             */
/*   Updated: 2017/11/30 18:48:20 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	unsigned int	i;
	int				sign;
	long long int	atoi;

	i = 0;
	sign = 1;
	atoi = 0;
	if (str[0] == '\0')
		return (0);
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	if (str[i] == '+' && sign == 1)
		i++;
	while ('0' <= str[i] && str[i] <= '9')
	{
		atoi = (atoi * 10) + (str[i] - '0');
		i++;
	}
	return ((int)(atoi * sign));
}
