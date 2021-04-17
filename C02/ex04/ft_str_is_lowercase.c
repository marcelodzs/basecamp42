/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madoming <madoming@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 22:18:07 by madoming          #+#    #+#             */
/*   Updated: 2021/04/10 22:21:22 by madoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_str_is_lowercase(char *str)
{
	while (*str)
	{
		if (*str >= 97 && *str <= 122)
			str++;
		else
			return (0);
	}
	return (1);
}
