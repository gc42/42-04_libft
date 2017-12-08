/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 08:42:21 by gcaron            #+#    #+#             */
/*   Updated: 2017/12/06 23:38:21 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
** Apply function 'f' on each character 'char' of chain 's' passed as
** argument specified by his 'index'
** to creat a "fresh" chain (using malloc (3)) resulting in successive
** application of 'f'.
**
** RETURN the "fresh" chain.
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
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
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
