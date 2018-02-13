/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 10:58:04 by gcaron            #+#    #+#             */
/*   Updated: 2017/12/21 16:23:37 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

/*
** ft_strnequ() compare lexicographically 's1' and 's2' for a  maximum of
** n characters.
**
** RETURN: If the two chains are identical, the function
** return 1, else 0.
*/

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t		i;

	if (!s1 || !s2)
		return (0);
	if (n == 0)
		return (1);
	i = 0;
	while (i < n - 1 && s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	if ((unsigned char)s1[i] == (unsigned char)s2[i])
		return (1);
	else
		return (0);
}
