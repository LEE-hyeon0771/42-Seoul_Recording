/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyelee2 <hyelee2@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 10:09:02 by hyelee2           #+#    #+#             */
/*   Updated: 2023/07/31 12:05:53 by hyelee2          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	print_board(int *board)
{
	int		i;
	char	c;

	i = 0;
	while (i < 10)
	{
		c = board[i] + '0';
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
}

int	possible(int col, int row, int *board)
{
	int		i;
	int		temp;

	i = 0;
	while (i < row)
	{
		temp = row - i;
		if (col == board[i] || col - board[i] == temp || board[i] - col == temp)
			return (1);
		i++;
	}
	return (0);
}

void	n_queen(int j, int *board, int *count)
{
	int	i;

	if (j == 10)
	{
		(*count)++;
		print_board(board);
		return ;
	}
	i = 0;
	while (i < 10)
	{
		if (!possible(i, j, board))
		{
			board[j] = i;
			n_queen(j + 1, board, count);
		}
		i++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	count;
	int	board[10];

	count = 0;
	n_queen(0, board, &count);
	return (count);
}
