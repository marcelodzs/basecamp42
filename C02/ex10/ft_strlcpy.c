/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madoming <madoming@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 01:10:23 by madoming          #+#    #+#             */
/*   Updated: 2021/04/16 02:45:04 by madoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char			*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while ((i < n) && src[i])
	{
		dest[i] = src[i];
		i += 1;
	}
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}

int				ft_strlen(char *str)
{
	int size;

	size = 0;
	while (*str != '\0')
	{
		size++;
		str++;
	}
	return (size);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	len_d;
	unsigned int	len_s;

	len_d = ft_strlen(dest);
	len_s = ft_strlen(src);
	if (size != 0)
	{
		if (len_s + 1 >= size)
		{
			ft_strncpy(dest, src, size - 1);
		}
		else
		{
			ft_strncpy(dest, src, len_s);
		}
	}
	return (len_s);
}
