/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyelee2 <hyelee2@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 14:57:26 by hyelee2           #+#    #+#             */
/*   Updated: 2023/07/25 15:58:51 by hyelee2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *c)
{
	int		i;

	i = 0;
	while (c[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	len_dest;
	unsigned int	len_src;
	unsigned int	i;

	i = 0;
	len_dest = ft_strlen(dest);
	len_src = ft_strlen(src);
	while (src[i] != '\0' && len_dest + i + 1 < size)
	{
		dest[len_dest + i] = src[i];
		i++;
	}
	dest[len_dest + i] = '\0';
	if (len_dest > size)
	{
		return (len_src + size);
	}
	return (len_src + len_dest);
}
