/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 11:55:38 by gcaron            #+#    #+#             */
/*   Updated: 2017/11/29 18:17:20 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
** man 3 STRDUP
** strdup() -- save a copy of a string
**
** The strdup() function allocates sufficient memory for a copy of the
** string s1, does the copy, and returns a pointer to it.
** The pointer may subsequently be used as an argument to
** the function free(3).
**
** If insufficient memory is available, NULL is returned and errno is
** set to ENOMEM.
*/

char	*ft_strdup(const char *s1)
{
	char	*str_copy;
	int		len;
	int		i;

	len = ft_strlen(s1);
	str_copy = (char*)malloc(sizeof(*str_copy) * (len + 1));
	if (str_copy == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str_copy[i] = s1[i];
		i++;
	}
	str_copy[i] = '\0';
	return (str_copy);
	// VERIFIER QUE "errno is set to ENOMEM
}
