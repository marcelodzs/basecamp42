/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madoming <madoming@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 00:47:50 by madoming          #+#    #+#             */
/*   Updated: 2021/04/16 02:04:55 by madoming         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strupcase(char *str)
{
	if (*str >= 'a' && *str <= 'z')
		*str = *str + 'A' - 'a';
}

void	ft_strlowcase(char *str)
{
	if (*str >= 'A' && *str <= 'Z')
		*str = *str - ('A' - 'a');
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		while (!((str[i] >= 'A' && str[i] <= 'Z') ||
			(str[i] >= 'a' && str[i] <= 'z') ||
			(str[i] >= '0' && str[i] <= '9')) && str[i] != '\0')
			i++;
		if (str[i] != '\0')
		{
			ft_strupcase(str + i);
			i++;
			while (((str[i] >= 'A' && str[i] <= 'Z') ||
				(str[i] >= 'a' && str[i] <= 'z') ||
				(str[i] >= '0' && str[i] <= '9')) && str[i] != '\0')
			{
				ft_strlowcase(str + i);
				i++;
			}
		}
	}
	return (str);
}
