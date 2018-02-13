/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 12:18:20 by gcaron            #+#    #+#             */
/*   Updated: 2017/11/27 13:20:59 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** man 3 toupper
** The toupper() function converts a lower-case letter to the corresponding
** upper-case letter.  The argument must be representable as an unsigned char
** or the value of EOF.
**
** RETURN
** If the argument is a lower-case letter, the toupper() function returns
** the corresponding upper-case letter if there is one; otherwise, the
** argument is returned unchanged.
*/

int		ft_toupper(int c)
{
	if ('a' <= c && c <= 'z')
		c = c - 32;
	return (c);
}
