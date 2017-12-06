/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 08:23:24 by gcaron            #+#    #+#             */
/*   Updated: 2017/12/06 09:37:30 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
** Apply function 'f' at every character of chain 's' to create a "fresh"
** chain (using malloc(3) containing the resul of multi-apply of 'f'.
**
** RESULT the "fresh" chain.
*/

char	*ft_strmap(char const *s, char (*f)(char))
{
	char		*str;
	size_t		i;

	if (s && f)
	{
		if (!(str = (char*)malloc(sizeof(str) * (ft_strlen(s) + 1))))
			return (NULL);
		i = 0;
		while (str[i])
		{
			str[i] = f(s[i]);
			i++;
		}
		return (str);
	}
	return (NULL);
}
