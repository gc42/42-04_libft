/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 18:18:09 by gcaron            #+#    #+#             */
/*   Updated: 2017/12/06 20:42:36 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

/*
** man 3 strNcat
** strncat() -- concatenate strings
**
** Append a copy of NUL terminated string 's2' to the end of NUL terminated
** string 's1', but not more than 'n' characters, then add a terminating '\0'.
** The string 's1' must have sufficient space to hold the result.
**
** RETURN the pointer 's1'.
*/

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t		i;
	size_t		j;

	i = ft_strlen(s1);
	j = 0;
	while (j < n && s2[j] != '\0')
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	s1[i] = '\0';
	return (s1);
}
