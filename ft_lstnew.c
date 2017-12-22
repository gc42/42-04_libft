/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 13:10:45 by gcaron            #+#    #+#             */
/*   Updated: 2017/12/21 09:36:08 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

/*
** Allocate (with malloc(3)/free(3)) and return a 'fresh' element.
**
** Fields 'content' and 'content_size' are initializided by copy of the
** function arguments. If 'content' is NULL, field 'content' is initialized
** to NULL and 'content_size' to 0 regardless of the value of the corresponding
** argument. Field 'next' is initialized to NULL.
**
** RETURN If allocation fails, return NULL. Else, return the new element.
*/

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list		*new;

	new = (t_list*)malloc(sizeof(t_list));
	if (new == NULL)
		return (NULL);
	if (content == NULL || content_size == 0)
	{
		new->content = NULL;
		new->content_size = 0;
	}
	else
	{
		new->content = (void*)malloc(sizeof(char) * content_size);
		if (new->content == NULL)
			return (NULL);
		ft_memcpy(new->content, content, content_size);
		new->content_size = content_size;
	}
	new->next = NULL;
	return (new);
}
