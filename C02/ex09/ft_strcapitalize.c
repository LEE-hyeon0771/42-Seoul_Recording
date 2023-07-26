/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyelee2 <hyelee2@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:59:43 by hyelee2           #+#    #+#             */
/*   Updated: 2023/07/24 14:26:18 by hyelee2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	ft_tolowercase(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c += 32;
	}
	return (c);
}

char	ft_touppercase(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		c -= 32;
	}
	return (c);
}

int	ft_isalpha(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

void	checkflag(char *str, int *flag)
{
	if (*flag)
	{
		*str = ft_touppercase(*str);
	}
	else
	{
		*str = ft_tolowercase(*str);
	}
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		flag;

	i = 0;
	flag = 1;
	while (str[i] != '\0')
	{
		if (ft_isalpha(str[i]) || (str[i] >= '0' && str[i] <= '9'))
		{
			checkflag(&str[i], &flag);
			flag = 0;
		}
		else
		{
			flag = 1;
		}
		i++;
	}
	return (str);
}
