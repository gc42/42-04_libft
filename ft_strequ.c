/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 14:54:34 by gcaron            #+#    #+#             */
/*   Updated: 2017/12/06 20:23:14 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_strequ() compare lexicographically 's1' and 's2'. If the two chains
** are identical, the function return 1, else 0.
**
** RETURN: s1 == s2 the return 1, else 0.
*/

int		ft_strequ(char const *s1, char const *s2)
{
	size_t		i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	if ((unsigned char)s1[i] == (unsigned char)s2[i])
		return (1);
	else
		return (0);
}
