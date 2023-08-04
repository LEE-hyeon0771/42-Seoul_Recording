/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyelee2 <hyelee2@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 13:12:40 by hyelee2           #+#    #+#             */
/*   Updated: 2023/08/03 14:32:06 by hyelee2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sort_ascending(int *tab, int size, int (*f)(int, int))
{
	int		i;
	int		j;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (f(tab[i], tab[j]) > 0)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_sort_descending(int *tab, int size, int (*f)(int, int))
{
	int	i;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (f(tab[i], tab[j]) < 0)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;

	i = 0;
	if (ft_sort_ascending(tab, length, f) || ft_sort_descending(tab, length, f))
	{
		return (1);
	}
	return (0);
}
