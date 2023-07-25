/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyelee2 <hyelee2@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 14:10:31 by hyelee2           #+#    #+#             */
/*   Updated: 2023/07/25 14:47:57 by hyelee2          ###   ########.fr       */
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

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		length;

	length = ft_strlen(to_find);
	if (*to_find == '\0')
	{
		return (str);
	}
	while (*str != '\0')
	{
		if (ft_strncmp(str, to_find, length) == 0)
		{
			break ;
		}
		str++;
	}
	if (*str != '\0')
	{
		return (str);
	}
	return (0);
}
