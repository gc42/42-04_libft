/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 12:50:30 by gcaron            #+#    #+#             */
/*   Updated: 2017/12/13 18:01:38 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

/*
** Alloacte (with malloc(3)) and return a "fresh" copy of a sub-part of
** chain 's' passed as parameter. Sub-part begin at index 'start' for 'len'
** characters.
** If 'start' and 'len' do not delimit a valid part of the string, the function
** is indeterminate.
** RETURN If allocate fails, return NULL. Else, return result sub-part string.
*/

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	char	*ptr_tmp;

	str = (char*)malloc(sizeof(char) * len + 1);
	if (str == NULL || s == NULL)
		return (NULL);
	ptr_tmp = str;
	s = s + start;
	while (len)
	{
		*ptr_tmp++ = *s++;
		len--;
	}
	*ptr_tmp = '\0';
	return (str);
}
