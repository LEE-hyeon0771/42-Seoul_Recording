/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyelee2 <hyelee2@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 17:04:37 by hyelee2           #+#    #+#             */
/*   Updated: 2023/08/01 17:33:43 by hyelee2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include "ft_stock_str.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long long	nb1;

	nb1 = nb;
	if (nb1 < 0)
	{
		ft_putchar('-');
		nb1 = -nb1;
	}
	if (nb1 > 9)
	{
		ft_putnbr((int)(nb1 / 10));
	}
	ft_putchar('0' + nb1 % 10);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;
	int	j;

	i = 0;
	while (par[i].str != 0)
	{
		j = 0;
		while (par[i].str[j] != '\0')
		{
			write(1, &par[i].str[j], 1);
			j++;
		}
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		j = 0;
		while (par[i].copy[j] != '\0')
		{
			write(1, &par[i].copy[j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
