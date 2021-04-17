/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madoming <madoming@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 22:36:05 by madoming          #+#    #+#             */
/*   Updated: 2021/04/10 22:36:22 by madoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strupcase(char *str)
{
	char*str2;

	str2 = str;
	while (*str)
	{
		if (*str >= 97 && *str <= 122)
		{
			*str -= 32;
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
