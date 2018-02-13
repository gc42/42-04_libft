/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 08:23:24 by gcaron            #+#    #+#             */
/*   Updated: 2017/12/06 13:39:32 by gcaron           ###   ########.fr       */
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
	size_t		len;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	if (!(str = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = f(s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
