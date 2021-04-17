/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madoming <madoming@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 22:46:07 by madoming          #+#    #+#             */
/*   Updated: 2021/04/16 22:46:11 by madoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	*ft_range(int min, int max)
{
	int *a;
	int i;

	if (min >= max)
		return (0);
	a = malloc((max - min) * sizeof(int));
	if (a == NULL)
		return (a);
	i = 0;
	while (min < max)
	{
		a[i++] = min;
		++min;
	}
	return (a);
}
