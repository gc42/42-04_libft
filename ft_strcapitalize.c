/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 10:39:19 by gcaron            #+#    #+#             */
/*   Updated: 2017/12/21 15:42:12 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

/*
** GC ft_strcapitalize() function capitalise every word's first character
** and set all other alpha characters of the string 'str' to lowercase.
*/

static int		ft_is_min(char c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	return (0);
}

static int		ft_is_maj(char c)
{
	if ('A' <= c && c <= 'Z')
		return (1);
	return (0);
}

static int		ft_is_alphanum(char c)
{
	if (('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z')
		|| ('0' <= c && c <= '9'))
		return (1);
	return (0);
}

static int		ft_is_delimiter(char c)
{
	if ((ft_is_alphanum(c) == 0))
		return (1);
	return (0);
}

char			*ft_strcapitalize(char *str)
{
	int		i;

	if (str == NULL)
		return (NULL);
	i = 0;
	i++;
	while (str[i] != '\0')
	{
		if (ft_is_min(str[0]) == 1)
		{
			str[0] = str[0] - 32;
		}
		if (ft_is_delimiter(str[i - 1]) && ft_is_min(str[i]))
			str[i] = str[i] - 32;
		if (ft_is_alphanum(str[i - 1]) && ft_is_maj(str[i]))
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
