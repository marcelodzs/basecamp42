/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madoming <madoming@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 18:33:43 by madoming          #+#    #+#             */
/*   Updated: 2021/04/14 18:41:40 by madoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int divisor;

	if (nb <= 1)
		return (0);
	divisor = nb / 2;
	while (nb % divisor != 0 || divisor == 1)
	{
		if (divisor == 1)
			return (1);
		divisor--;
	}
	return (0);
}
