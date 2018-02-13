/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 16:33:44 by gcaron            #+#    #+#             */
/*   Updated: 2017/11/27 20:08:46 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** man STRCAT(3)
** strcat -- concatenate strings
**
** Add 'scr' at the end of 'dest', and add '\0'
**
** RETURN The strcat() function return the pointer s1.
*/

char	*ft_strcat(char *s1, const char *s2)
{
	int		i;
	int		j;

	i = ft_strlen(s1);
	j = 0;
	while (s2[j] != '\0')
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	s1[i] = '\0';
	return (s1);
}
