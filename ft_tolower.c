/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 12:10:24 by gcaron            #+#    #+#             */
/*   Updated: 2017/11/27 13:17:56 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** man 3 tolower
** The tolower() function converts an upper-case letter to the corresponding
** lower-case letter.  The argument must be representable as an unsigned char
** or the value of EOF.
**
** RETURN If the argument is an upper-case letter, the tolower() function
** returns the corresponding lower-case letter if there is one; otherwise, the
** argument is returned unchanged.
*/

int		ft_tolower(int c)
{
	if ('A' <= c && c <= 'Z')
		c = c + 32;
	return (c);
}
