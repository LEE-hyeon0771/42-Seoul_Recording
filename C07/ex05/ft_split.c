/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyelee2 <hyelee2@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 10:28:27 by hyelee2           #+#    #+#             */
/*   Updated: 2023/08/01 11:25:36 by hyelee2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	i_sep(char c, char *sep)
{
	int	i;

	i = 0;
	while (sep[i])
	{
		if (c == sep[i])
			return (1);
		i++;
	}
	return (0);
}

int	word_count(char *str, char *sep)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (i_sep(str[i], sep) == 0 && (i == 0 || i_sep(str[i - 1], sep) == 1))
			count++;
		i++;
	}
	return (count);
}

int	*get_word_len(char *str, char *sep, int count)
{
	int	*len;
	int	i;
	int	index;

	len = (int *)malloc(sizeof(int) * count);
	i = 0;
	while (i < count)
	{
		len[i] = 0;
		i++;
	}
	i = 0;
	index = 0;
	while (str[i])
	{
		if (i_sep(str[i], sep) == 0)
			len[index]++;
		else if (i != 0 && i_sep(str[i - 1], sep) == 0)
			index++;
		i++;
	}
	return (len);
}

void	split_array(char *str, char *sep, char **split_arr, int *len)
{
	int	i;
	int	j;
	int	index;

	i = 0;
	j = 0;
	index = 0;
	while (str[i])
	{
		if (i_sep(str[i], sep) == 0)
		{
			if (i == 0 || i_sep(str[i - 1], sep) == 1)
				split_arr[index] = (char *)malloc(sizeof(char) * len[index]);
			split_arr[index][j++] = str[i];
			split_arr[index][j] = '\0';
		}
		else if (i != 0 && i_sep(str[i - 1], sep) == 0)
		{
			index++;
			j = 0;
		}
		i++;
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**split_arr;
	int		*len;
	int		count;

	count = word_count(str, charset);
	split_arr = (char **)malloc(sizeof(char *) * (count + 1));
	len = get_word_len(str, charset, count);
	split_array(str, charset, split_arr, len);
	split_arr[count] = 0;
	return (split_arr);
}
