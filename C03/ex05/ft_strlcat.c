/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madoming <madoming@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 04:07:12 by madoming          #+#    #+#             */
/*   Updated: 2021/04/13 14:42:33 by madoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int				ft_strlen(char *str)
{
	unsigned int contador;

	contador = 0;
	while (*str != '\0')
	{
		++contador;
		++str;
	}
	return (contador);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_size;
	unsigned int	src_size;
	unsigned int	i;

	dest_size = ft_strlen(dest);
	src_size = ft_strlen(src);
	i = 0;
	if (size < dest_size)
		return (src_size + size);
	if ((dest == '\0' && src == '\0') || dest_size == size)
		return (dest_size + src_size);
	while (src[i] != '\0' && i < (size - (dest_size - 1)))
	{
		dest[dest_size + i] = src[i];
		i++;
	}
	while (i < src_size)
	{
		dest[dest_size + i] = '\0';
		i++;
	}
	dest[dest_size + i] = '\0';
	return (dest_size + src_size);
}
