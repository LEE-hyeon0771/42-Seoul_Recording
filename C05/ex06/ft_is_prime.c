/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyelee2 <hyelee2@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 15:17:53 by hyelee2           #+#    #+#             */
/*   Updated: 2023/07/27 18:20:47 by hyelee2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	double		mid;
	int			start;
	int			end;

	start = 1;
	end = nb / 2;
	if (nb < 1)
		return (0);
	while (start < end)
	{
		mid = (start + end) / 2;
		if (mid * mid < nb)
			start = mid + 1;
		else
			end = mid;
	}
	if (end * end == nb)
		return (end);
	return (end - 1);
}

int	ft_is_prime(int nb)
{
	int		i;

	if (nb <= 1)
	{
		return (0);
	}
	i = 2;
	while (i <= ft_sqrt(nb))
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
