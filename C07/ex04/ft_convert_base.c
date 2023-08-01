/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyelee2 <hyelee2@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 19:55:31 by hyelee2           #+#    #+#             */
/*   Updated: 2023/08/01 10:23:35 by hyelee2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	base_check_len(char *base)
{
	int		i;
	int		j;

	i = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+' || base[i] <= 32 || base[i] > 126)
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
	if (i < 2)
		return (0);
	return (i);
}

int	get_atoi_base(char c, char *base, int *index)
{
	int		i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
		{
			*index = i;
			return (1);
		}
		i++;
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int		i;
	int		flag;
	int		result;
	int		index;

	i = 0;
	index = 0;
	flag = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			flag *= -1;
		i++;
	}
	result = 0;
	while (get_atoi_base(str[i], base, &index))
	{
		result = result * base_check_len(base) + index;
		i++;
	}
	return (result * flag);
}

void	convert_base(int num, char *dest, char *base, int i)
{
	unsigned int	temp;
	unsigned int	base_len;

	base_len = 0;
	while (base[base_len] != '\0')
		base_len++;
	if (num < 0)
	{
		dest[0] = '-';
		temp = num * -1;
	}
	else
		temp = num;
	while (temp >= base_len)
	{
		dest[i] = base[temp % base_len];
		temp /= base_len;
		i--;
	}
	dest[i] = base[temp % base_len];
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{	
	int		base_len;
	char	*dest;
	int		num;
	int		convert;
	int		temp;

	if (!base_check_len(base_from) || !base_check_len(base_to))
		return (0);
	num = ft_atoi_base(nbr, base_from);
	convert = 1;
	base_len = base_check_len(base_to);
	temp = num;
	while (temp != 0)
	{
		temp /= base_len;
		convert++;
	}
	if (num == 0 || num < 0)
		convert += 1;
	dest = (char *)malloc(sizeof(char) * convert);
	convert_base(num, dest, base_to, convert - 2);
	dest[convert - 1] = '\0';
	return (dest);
}
