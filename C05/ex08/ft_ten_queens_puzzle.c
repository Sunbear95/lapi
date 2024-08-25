/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeonsan.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 19:50:06 by jyoo              #+#    #+#             */
/*   Updated: 2024/08/25 05:11:19 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	pt_col(char *col)
{
	write (1, col, 10);
	write (1, "\n", 1);
}

int	safe(int i, char *col)
{
	int	k;

	k = 0;
	while (k < i)
	{
		if (col[k] == col [i] || col[k] - col[i] == -(k - i)
			|| col[k] - col [i] == (k - i))
			return (0);
		k++;
	}
	return (1);
}

void	que_check(int i, char *col, int *pt)
{
	int	j;

	if (safe(i, col))
	{
		if (i == 9)
		{
			pt_col(col);
			*pt = *pt + 1;
		}
		else
		{
			j = 0;
			while (j < 10)
			{
				col[i + 1] = j + '0';
				que_check(i + 1, col, pt);
				j++;
			}
		}
	}
}

int	ft_ten_queens_puzzle(void)
{
	int		solve;
	int		*pt;
	char	col[10];

	solve = 0;
	while (solve < 10)
	{
		col[solve] = '0';
		solve++;
	}
	solve = 0;
	pt = &solve;
	que_check(-1, col, pt);
	return (solve);
}
