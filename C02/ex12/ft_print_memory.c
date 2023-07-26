/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyelee2 <hyelee2@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 19:53:01 by hyelee2           #+#    #+#             */
/*   Updated: 2023/07/26 11:35:27 by hyelee2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	print_check_hex(unsigned int num, char *hex)
{
	if (num >= 16)
	{
		print_check_hex(num / 16, hex);
		print_check_hex(num % 16, hex);
	}
	else
	{
		write(1, &hex[num], 1);
	}
}

void	print_hex_address(unsigned long long addr, int i, char *hex)
{
	unsigned long long	temp;

	temp = addr;
	while (temp)
	{
		temp = temp / 16;
		i++;
	}
	temp = 0;
	while (temp + i < 20)
	{
		write(1, "0", 1);
		temp++;
	}
	print_check_hex(addr, hex);
	write(1, ": ", 2);
}

void	print_hex(unsigned char *ptr, int start, int end, char *hex)
{
	int	j;

	j = 0;
	while (j < 16)
	{
		if (start + j < end)
		{
			print_check_hex(ptr[start + j] / 16, hex);
			print_check_hex(ptr[start + j] % 16, hex);
		}
		else
		{
			write(1, "  ", 2);
		}
		if (j % 2)
		{
			write(1, " ", 1);
		}
		j++;
	}
}

void	print_check_ascii(unsigned char *ptr, int start, int end)
{
	int	j;

	j = 0;
	while (j < 16 && start + j < end)
	{
		if (ptr[start + j] >= 32 && ptr[start + j] <= 126)
		{
			write(1, &ptr[start + j], 1);
		}
		else
		{
			write(1, ".", 1);
		}
		j++;
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned char	*ptr;
	char			*hex;

	i = 0;
	ptr = (unsigned char *) addr;
	hex = "0123456789abcdef";
	while (i < size)
	{
		print_hex_address((unsigned long long)(ptr + i), 0, hex);
		print_hex(ptr, i, size, hex);
		print_check_ascii(ptr, i, size);
		write(1, "\n", 1);
		i += 16;
	}
	return (addr);
}
