/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 18:45:31 by gcaron            #+#    #+#             */
/*   Updated: 2017/12/21 15:28:10 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Use malloc(3) to allow and return a string "fraiche"
** finiched with '\0' representing integer 'n' passed as
** argument. Negative numbers are treated.
** If malloc failed, return NULL
** Return as a string the integer passed as argument.
**
** >> Use ft_nbr2str() that is an iterative putnbr who write digits in
** conveniant order in the string.
*/

static void		ft_nbr2str(char *tmp, int n)
{
	int		x;

	if (n == -2147483648)
	{
		*tmp++ = '-';
		*tmp++ = '2';
		n = 147483648;
	}
	if (n < 0)
	{
		*tmp++ = '-';
		n = -n;
	}
	x = 1;
	while ((n / 10 / x) != 0)
		x *= 10;
	while (x >= 1)
	{
		*tmp++ = (n / x + '0');
		n %= x;
		x /= 10;
	}
}

char			*ft_itoa(int n)
{
	char	*str;
	char	*tmp;
	int		len;

	len = ft_intlen(n);
	str = ft_strnew(len);
	if (str == NULL)
		return (NULL);
	tmp = str;
	ft_nbr2str(tmp, n);
	return (str);
}
