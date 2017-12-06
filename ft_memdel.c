/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 09:21:24 by gcaron            #+#    #+#             */
/*   Updated: 2017/12/04 08:22:09 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
/*
** Prend en parametre l'adresse d'un pointeur dont la zone pointee
** doit etre liberee avec free(3), puis le pointeur est mis a NULL.
**
** RETURN: nothing
*/

void	ft_memdel(void **ap)
{
	free(*ap);
	*ap = NULL;
}
