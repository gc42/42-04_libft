/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 13:46:33 by gcaron            #+#    #+#             */
/*   Updated: 2017/12/13 17:46:25 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

/*
** Assign value '\0' to all characters of argument 's'
**
** RETURN nothing
*/

void	ft_strclr(char *s)
{
	if (s != NULL)
	{
		while (*s)
			*s++ = '\0';
	}
}
