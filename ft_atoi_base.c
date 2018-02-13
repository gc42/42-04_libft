/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 03:40:45 by gcaron            #+#    #+#             */
/*   Updated: 2017/12/14 18:36:53 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** See D5x21
**
** ft_atoi_base() take a number expressed in string 'str' in a particular
** base, and convert it in an integer.
**
** RETURN an integer in base 10. If error, return (0). Errors are :
** - str empty
** - base NULL, empty or only one character
** - str writed with characters witch are not in base except '+' '-'.
** - base content a character more than one time (duplicates).
** - base content '+' '-'
** - and so on ...
*/

static char		ft_test_base(const char *base)
{
	unsigned char	len;
	unsigned char	i;
	unsigned char	j;

	len = ft_strlen(base);
	i = 0;
	while (i < len - 1)
	{
		if (base[i] == '-' || base[i] == '+' || !(ft_isgraph(base[i])))
			return (0);
		j = i + 1;
		while (j < len)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (len);
}

static int		ft_test_str(const char *str, const char *base)
{
	unsigned int	i;
	int				sign;

	sign = 1;
	i = 0;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	if (str[i] == '+' && sign == 1)
		i++;
	while (str[i] != '\0')
	{
		if (ft_strchr(base, (int)str[i]) == NULL)
			return (0);
		i++;
	}
	return (1);
}

static int		ft_rank_in_base(const char c, const char *base)
{
	unsigned int	j;

	j = 0;
	while (base[j] != '\0')
	{
		if (c == base[j])
			return (j);
		j++;
	}
	return (0);
}

static int		ft_my_atoi(const char *str, const char *base, unsigned char b)
{
	unsigned int	i;
	int				sign;
	long long int	atoi;

	i = 0;
	sign = 1;
	atoi = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	if (str[i] == '+' && sign == 1)
		i++;
	while (str[i] != '\0')
	{
		atoi = (atoi * b) + ft_rank_in_base(str[i], base);
		i++;
	}
	return ((int)(atoi * sign));
}

int				ft_atoi_base(const char *str, const char *base)
{
	unsigned char	b;
	int				n;
	int				s;

	if (base == NULL || base[0] == '\0' || base[1] == '\0'
			|| str == NULL || str[0] == '\0')
		return (0);
	b = ft_test_base(base);
	s = ft_test_str(str, base);
	n = 0;
	if (b != 0 && s != 0)
	{
		n = ft_my_atoi(str, base, b);
		return (n);
	}
	return (0);
}
