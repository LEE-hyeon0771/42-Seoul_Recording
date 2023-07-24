/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyelee2 <hyelee2@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 12:58:05 by hyelee2           #+#    #+#             */
/*   Updated: 2023/07/20 15:33:29 by hyelee2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

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
