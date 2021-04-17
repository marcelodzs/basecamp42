/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madoming <madoming@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 00:27:33 by madoming          #+#    #+#             */
/*   Updated: 2021/04/11 00:33:58 by madoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strlowcase(char *str)
{
	char *str2;

	str2 = str;
	while (*str)
	{
		if (*str >= 65 && *str <= 90)
		{
			*str += 32;
			str++;
		}
		else
		{
			str++;
		}
	}
	str = str2;
	return (str);
}
