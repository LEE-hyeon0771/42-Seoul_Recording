/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyelee2 <hyelee2@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 15:24:00 by hyelee2           #+#    #+#             */
/*   Updated: 2023/07/31 19:51:38 by hyelee2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int					*ptr;
	unsigned int		i;
	unsigned int		len;

	ptr = 0;
	len = max - min;
	if (min >= max)
	{
		return (ptr);
	}	
	ptr = (int *)malloc(len * sizeof(int));
	i = 0;
	while (i < len)
	{
		ptr[i] = min;
		i++;
		min++;
	}
	return (ptr);
}
