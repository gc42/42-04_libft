/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 11:11:58 by gcaron            #+#    #+#             */
/*   Updated: 2017/11/30 19:45:56 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

/*
** ft_strnew() create a new string with 'size' characters, all initialisided
** at '\0'.
** Allocate (with malloc(3) and return a "fresh" string NUL-terminated by '\0'.
** Each character of the string is initialised at '\0'.
** If allocation fails, return NULL.
*/

char	*ft_strnew(size_t size)
{
	char	*str;
	size_t		i;

	str = (char*)malloc(sizeof(char) * size + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < size + 1)
	{
		str[i] = '\0';
		i++;
	}
	return (str);
}
