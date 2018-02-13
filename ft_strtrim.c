/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 13:01:27 by gcaron            #+#    #+#             */
/*   Updated: 2017/12/13 18:09:03 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
** Allocate (with malloc(3)) and return a copy of chain 's' passed as argument
** without beginning and ending blank spaces of chain.
** Blanck spaces are ' ', '\n', '\t'.
** If chain 's' do not contain beginning and ending blanck spaces, function
** ft_strtrim() return a copy of 's'.
** If allocation fails, function return NULL.
**
** RETURN The "fresh" trimmed chain or a copy of 's'.
*/

char	*ft_strtrim(char const *s)
{
	char		*str;
	char const	*s_end;
	char		*tmp;

	if (s == NULL)
		return (NULL);
	s_end = s + ft_strlen(s) - 1;
	while (*s == ' ' || *s == '\t' || *s == '\n')
		s++;
	if (*s == '\0')
		return (ft_strnew(0));
	while (*s_end == ' ' || *s_end == '\t' || *s_end == '\n')
		s_end--;
	if (!(str = (char*)malloc(sizeof(char) * (s_end - s + 2))))
		return (NULL);
	tmp = str;
	while (s <= s_end)
		*tmp++ = *s++;
	*tmp = '\0';
	return (str);
}
