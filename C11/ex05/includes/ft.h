/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyelee2 <hyelee2@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 16:16:03 by hyelee2           #+#    #+#             */
/*   Updated: 2023/08/04 15:31:42 by hyelee2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include<unistd.h>

int		(*arr[5])(int, int);
int		plus(int a, int b);
int		minus(int a, int b);
int		mul(int a, int b);
int		div(int a, int b);
int		mod(int a, int b);
int		is_space(char *str);
int		ft_atoi(char *str);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	print_operator(int a, int b, char op);
void	set_atoi_num(char *str1, char op, char *str2);
void	set_func();

#endif
