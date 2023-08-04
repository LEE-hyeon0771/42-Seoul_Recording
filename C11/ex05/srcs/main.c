/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyelee2 <hyelee2@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 16:36:07 by hyelee2           #+#    #+#             */
/*   Updated: 2023/08/04 16:07:32 by hyelee2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	set_atoi_num(char *str1, char op, char *str2)
{
	int	a;
	int	b;

	a = ft_atoi(str1);
	b = ft_atoi(str2);
	if (b == 0)
	{
		if (op == '/')
		{
			write(1, "Stop : division by zero", 23);
			return ;
		}
		else if (op == '%')
		{
			write(1, "Stop : modulo by zero", 21);
			return ;
		}
	}
	print_operator(a, b, op);
}

void set_func()
{
	arr[0] = plus;
	arr[1] = minus;
	arr[2] = mul;
	arr[3] = div;
	arr[4] = mod;
}

int	main(int argc, char *argv[])
{
	char	*op_arr;
	char	op;

	set_func();
	if (argc == 4)
	{
		op_arr = argv[2];
		if (op_arr[1] == '\0' && (op_arr[0] == '+' || op_arr[0] == '-'
				|| op_arr[0] == '*' || op_arr[0] == '/'
				|| op_arr[0] == '%'))
		{
			op = op_arr[0];
			set_atoi_num(argv[1], op, argv[3]);
			write(1, "\n", 1);
		}
		else
		{
			write(1, "0", 1);
			write(1, "\n", 1);
			return (0);
		}
	}
	return (0);
}
