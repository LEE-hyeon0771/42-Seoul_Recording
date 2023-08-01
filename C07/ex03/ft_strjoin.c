/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyelee2 <hyelee2@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 16:23:17 by hyelee2           #+#    #+#             */
/*   Updated: 2023/07/31 19:48:40 by hyelee2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_sep_strlen(char *sep)
{
	int	i;

	i = 0;
	while (sep[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_strs_strlen(int size, char **strs)
{
	int	len;
	int	i;
	int	j;

	len = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			len++;
			j++;
		}
		i++;
	}
	return (len);
}

void	*ft_dest(char *dest, char **strs, char *sep, int size)
{
	int	i;
	int	j;
	int	index;

	i = 0;
	index = 0;
	while (i < size)
	{
		j = 0;
		while (sep[j] != '\0' && i != 0)
			dest[index++] = sep[j++];
		j = 0;
		while (strs[i][j] != '\0')
			dest[index++] = strs[i][j++];
		i++;
	}
	dest[index] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*ptr;
	int		sep_len;
	int		strs_len;

	if (size == 0)
	{
		ptr = (char *)malloc(sizeof(char));
		ptr[0] = '\0';
		return (ptr);
	}
	sep_len = ft_sep_strlen(sep);
	strs_len = ft_strs_strlen(size, strs);
	ptr = (char *)malloc((sizeof(char) * strs_len + 1)
			+ (sizeof(char) * sep_len * (size - 1)));
	ft_dest(ptr, strs, sep, size);
	return (ptr);
}
