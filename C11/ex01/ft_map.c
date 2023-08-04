/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyelee2 <hyelee2@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 19:49:54 by hyelee2           #+#    #+#             */
/*   Updated: 2023/08/02 20:15:26 by hyelee2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*answer;
	int	i;

	answer = (int *)malloc(sizeof(int) * length);
	if (!answer)
	{
		return (0);
	}
	i = 0;
	while (i < length)
	{
		answer[i] = f(tab[i]);
		i++;
	}
	return (answer);
}
