/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 11:19:07 by gcaron            #+#    #+#             */
/*   Updated: 2017/12/07 04:10:57 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

/*
** man 3 strnlen
** ft_strlen() -- find length of string
** The ft_strnlen function attempts to compute the length of 's', but never
** scans beyond (au-dela) the first 'maxlen' bytes of 's'.
**
** RETURN idem as ft_strlen(s) if len < maxlen, or maxlen if there are no '\0'
** octets in the 'maxlen' first characters of the string 's'.
*/

size_t		ft_strnlen(const char *s, size_t maxlen)
{
	size_t		i;

	i = 0;
	while (s[i] && i < maxlen)
		i++;
	return (i);
}
