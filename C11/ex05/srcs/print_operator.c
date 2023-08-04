/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_operator.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyelee2 <hyelee2@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 16:28:33 by hyelee2           #+#    #+#             */
/*   Updated: 2023/08/04 16:07:49 by hyelee2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

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

void	print_operator(int a, int b, char op)
{
	int	answer;
	//int	(*arr[5])(int, int);

	answer = 0;
	if (op == '+')
		answer = arr[0](a, b);
	else if (op == '-')
		answer = arr[1](a, b);
	else if (op == '*')
		answer = arr[2](a, b);
	else if (op == '/')
		answer = arr[3](a, b);
	else if (op == '%')
		answer = arr[4](a, b);
	ft_putnbr(answer);
}
