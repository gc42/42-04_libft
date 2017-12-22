/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/05 23:08:52 by gcaron            #+#    #+#             */
/*   Updated: 2017/12/21 16:29:15 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

/*
** self-made function
** ft_strrev() takes the string 'str' as argument and return the same string
** with all characters in reversed  order, first become last and so on.
** Ex: "abcdefg" become "gfedcba".
**
** RETURN reversed 'str'.
*/

char	*ft_strrev(char *str)
{
	int			temp;
	size_t		i;
	size_t		j;
	size_t		len;

	len = ft_strlen(str);
	i = 0;
	j = len - 1;
	while (i < j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
	return (str);
}
