/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyelee2 <hyelee2@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 15:50:30 by hyelee2           #+#    #+#             */
/*   Updated: 2023/07/31 19:52:12 by hyelee2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	unsigned int	len;
	unsigned int	i;

	*range = 0;
	if (min >= max)
	{
		return (0);
	}
	len = max - min;
	*range = (int *)malloc(len * sizeof(int));
	if (*range == 0)
	{
		return (-1);
	}
	i = 0;
	while (i < len)
	{
		(*range)[i] = min;
		i++;
		min++;
	}
	return (len);
}
