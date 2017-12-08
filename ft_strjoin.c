/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 15:52:20 by gcaron            #+#    #+#             */
/*   Updated: 2017/12/06 22:53:07 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
** ft_strjoin() function allocate (using malloc(3)) and return a "fresh"
** string chain null-terminated with '\0' resulting in the concatenation
** of s1 and s2. If allocation fails, the function returns NULL.
**
** RETURN the "fresh" string
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	char	*ptr;

	str = (char*)malloc(sizeof(str) * (ft_strlen(s1) + ft_strlen(s2)));
	if (!str || !s1 || !s2)
		return (NULL);
	ptr = str;
	while (*s1)
		*ptr++ = *s1++;
	while (*s2)
		*ptr++ = *s2++;
	*ptr = '\0';
	return (str);
}
