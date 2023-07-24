/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyelee2 <hyelee2@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 13:32:42 by hyelee2           #+#    #+#             */
/*   Updated: 2023/07/22 13:47:42 by hyelee2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print(char arr[10], int n)
{
	int		i;

	i = 0;
	while (i < n)
	{
		ft_putchar(arr[i]);
		i++;
	}
	if (arr[0] != '9' - n + 1)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	recursive_comb(char arr[10], int pos, int n, int start)
{
	int		i;

	i = start;
	if (pos == n)
	{
		print(arr, n);
		return ;
	}
	while (i <= '9')
	{
		arr[pos] = i;
		recursive_comb(arr, pos + 1, n, i + 1);
		i++;
	}
}

void	ft_print_combn(int n)
{
	char	combn[10];

	if (n >= 1 && n <= 10)
	{
		recursive_comb(combn, 0, n, '0');
	}
}
