/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/11 13:10:45 by gcaron            #+#    #+#             */
/*   Updated: 2017/12/13 13:57:32 by gcaron           ###   ########.fr       */
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

	new = (t_list*)malloc(sizeof(*new));
	if (new == NULL)
		return (NULL);
	else
	{
		if (content != NULL)
		{
			new->content = (void*)malloc(sizeof(void) * content_size + 1);
			if (new->content == NULL)
				return (NULL);
			ft_memcpy(new->content, content, content_size);
			new->content_size = content_size;
		}
		else
		{
			new->content = NULL;
			new->content_size = 0;
		}
		new->next = NULL;
	}
	return (new);
}
