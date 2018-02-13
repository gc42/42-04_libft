/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 13:42:04 by gcaron            #+#    #+#             */
/*   Updated: 2017/12/13 18:29:43 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Add 'new' element at the beginning of the list. The new element whas created
** using ft_lstnew().
** RETURN nothing
*/

void	ft_lstadd(t_list **alst, t_list *new_lst)
{
	new_lst->next = *alst;
	*alst = new_lst;
}
