/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madoming <madoming@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 17:23:29 by madoming          #+#    #+#             */
/*   Updated: 2021/04/14 17:42:24 by madoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int res;

	res = 0;
	if (nb < 0)
		return (res);
	else
	{
		res = 1;
		while (nb > 0)
		{
			res = res * nb;
			nb--;
		}
	}
	return (res);
}
