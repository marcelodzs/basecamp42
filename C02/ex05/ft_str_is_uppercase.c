/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madoming <madoming@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 22:23:42 by madoming          #+#    #+#             */
/*   Updated: 2021/04/10 22:24:04 by madoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_str_is_uppercase(char *str)
{
	while (*str)
	{
		if (*str >= 65 && *str <= 90)
			str++;
		else
			return (0);
	}
	return (1);
}
