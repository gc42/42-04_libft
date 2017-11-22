/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/15 16:31:08 by gcaron            #+#    #+#             */
/*   Updated: 2017/09/15 16:38:03 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;

	i = 0;
	while (str[i] != '\0' && to_find[i] != '\0' && str[i] == to_find[i])
		i++;
	if (to_find[i] == '\0')
		return (str);
	if (str[i] == '\0')
		return (0);
	return (ft_strstr(str + 1, to_find));
}
