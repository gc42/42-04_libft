/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 15:31:39 by gcaron            #+#    #+#             */
/*   Updated: 2017/12/06 23:57:58 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** ft_striter() function apply the function 'f' on every character of
** the chain 's' passed as argument. Each character is passed as address
** to function 'f' so it can be modified if necessary.
**
** RETURN nothing
*/

void	ft_striter(char *s, void (*f)(char *))
{
	unsigned int	i;

	i = 0;
	if (s && f)
	{
		while (s[i])
		{
			f(&s[i]);
			i++;
		}
	}
}
