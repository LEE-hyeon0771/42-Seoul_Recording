/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyelee2 <hyelee2@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 17:54:32 by hyelee2           #+#    #+#             */
/*   Updated: 2023/07/27 10:15:53 by hyelee2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	base_check(char *base)
{
	int		i;
	int		j;

	if (ft_strlen(base) < 2)
	{
		return (0);
	}
	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+' || base[i] < 32 || base[i] > 126)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long long	nb1;
	int			i;
	int			base_len;

	i = 0;
	nb1 = nbr;
	base_len = ft_strlen(base);
	if (!base_check(base))
	{
		return ;
	}
	if (nb1 < 0)
	{
		ft_putchar('-');
		nb1 = -nb1;
	}
	if (nb1 >= base_len)
	{
		ft_putnbr_base((int)(nb1 / base_len), base);
		ft_putnbr_base((int)(nb1 % base_len), base);
	}
	else
	{
		ft_putchar(base[nb1]);
	}
}
