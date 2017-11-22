/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcaron <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/18 18:33:10 by gcaron            #+#    #+#             */
/*   Updated: 2017/09/19 12:25:27 by gcaron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_dest;
	unsigned int	len_src;
	unsigned int	i;
	unsigned int	j;

	len_dest = 0;
	len_src = 0;
	while (dest[len_dest] != '\0')
		len_dest++;
	while (src[len_src] != '\0')
		len_src++;
	if ((size - 1) < len_dest)
	{
		return (size + len_src);
	}
	if ((size - 1) >= len_dest)
	{
		i = 0;
		j = len_dest;
		while (i < ((size - 1) - len_dest) && src[i] != '\0')
			dest[j++] = src[i++];
		dest[j] = '\0';
	}
	return (len_dest + len_src);
}
