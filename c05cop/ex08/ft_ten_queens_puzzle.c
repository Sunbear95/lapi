/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajikim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 22:04:39 by dajikim           #+#    #+#             */
/*   Updated: 2024/08/20 22:06:58 by dajikim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

void	ft_place_queen(int row, int pos[], int *cnt);
bool	ft_isblocked(int row, int col, int pos[]);
void	ft_put_int_arr(int arr[], int n);

int	ft_ten_queens_puzzle(void)
{
	int	pos[10];
	int	cnt;

	cnt = 0;
	ft_place_queen(0, pos, &cnt);
	return (cnt);
}

void	ft_place_queen(int row, int pos[], int *cnt)
{
	int	j;

	if (row >= 10)
	{
		ft_put_int_arr(pos, 10);
		(*cnt)++;
		return ;
	}
	j = 0;
	while (j < 10)
	{
		if (!ft_isblocked(row, j, pos))
		{
			pos[row] = j;
			ft_place_queen(row + 1, pos, cnt);
		}
		j++;
	}
}

bool	ft_isblocked(int row, int col, int pos[])
{
	int	i;

	i = 0;
	while (i < row)
	{
		if (col == pos[i] + (row - i) || col == pos[i] \
				|| col == pos[i] - (row - i))
			return (true);
		i++;
	}
	return (false);
}

void	ft_put_int_arr(int arr[], int n)
{
	char	c;
	int		i;

	i = 0;
	while (i < n)
	{
		c = arr[i] + '0';
		write(STDOUT_FILENO, &c, 1);
		i++;
	}
	write(STDOUT_FILENO, "\n", 1);
}
