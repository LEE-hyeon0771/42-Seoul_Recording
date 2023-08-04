/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyelee2 <hyelee2@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 20:17:41 by hyelee2           #+#    #+#             */
/*   Updated: 2023/08/02 20:32:42 by hyelee2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	answer;
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < length)
	{
		answer = f(tab[i]);
		if (answer != 0)
		{
			count++;
		}
		i++;
	}
	return (count);
}
