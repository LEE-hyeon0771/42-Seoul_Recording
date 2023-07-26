/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyelee2 <hyelee2@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 15:15:21 by hyelee2           #+#    #+#             */
/*   Updated: 2023/07/24 18:33:28 by hyelee2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

char	get_ascii(unsigned char n)
{
	if (n < 10)
	{
		return (n + 48);
	}
	return (n + 87);
}

void	print(unsigned char c)
{
	unsigned int	result;

	write(1, &"\\", 1);
	result = get_ascii(c / 16 % 16);
	write(1, &result, 1);
	result = get_ascii(c % 16);
	write(1, &result, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
		{
			print(*str);
		}
		else
		{
			write(1, str, 1);
		}
		str++;
	}
}
