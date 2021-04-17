/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madoming <madoming@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 18:44:49 by madoming          #+#    #+#             */
/*   Updated: 2021/04/14 18:54:49 by madoming         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	int nextprime;

	if (ft_is_prime(nb))
		return (nb);
	if (nb <= 2)
		return (2);
	nextprime = nb;
	if (nb % 2 == 0)
		nextprime = nb + 1;
	while (nextprime < 2147483647)
	{
		if (ft_is_prime(nextprime))
			return (nextprime);
		nextprime += 2;
	}
	return (-1);
}
