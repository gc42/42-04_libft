/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 09:12:20 by gcaron            #+#    #+#             */
/*   Updated: 2017/12/08 10:00:31 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Convert integer 'n' to base and print the value on std output
**
** Voir D5x20
*/

static unsigned char		ft_test_base(char *base)
{
	unsigned char	len;
	unsigned char	i;
	unsigned char	j;

	if (base == NULL || base[0] == '\0' || base[1] == '\0')
		return (0);
	len = ft_strlen(base);
	if (len < 2)
		return (0);
	i = 0;
	while (i++ < len -1)
	{
		if (base[i] == '-' || base[i] == '+' || !(ft_isgraph(base[i])))
			return (0);
		j = i + 1;
		while (j++ < len)
		{
			if (base[i] == base[j])
				return (0);
		}
	}
	return (len);
}

static void		ft_print_base(long int n, char *base, unsigned char b)
{
		if (n < 0)
		{
			ft_putchar('-');
			n = -n;
		}
		if (n / b)
			ft_print_base(n / b, base, b);
		ft_putchar(base[n % b]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned char	b;
	long int		n;

	n = (long int)nbr;
	b = ft_test_base(base);
	if (b != 0)
		ft_print_base(n, base, b);
}
