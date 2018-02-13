/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/06 02:57:11 by gcaron            #+#    #+#             */
/*   Updated: 2017/12/07 03:24:42 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Use bubble sort to sort an integer table.
*/

void	ft_sort_integer_table(int *tab, int size)
{
	int		temp;
	int		i;
	int		sort;

	sort = 0;
	while (sort < size)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			i++;
		}
		sort++;
	}
}
