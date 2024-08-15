/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeonsan.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 15:32:28 by jyoo              #+#    #+#             */
/*   Updated: 2024/08/15 18:18:25 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char *str, int strl)
{
	write (1, str, strl);
}

void	inttochar(int n)
{
	char	m;
	char	k;

	m = n / 10 + '0';
	k = n % 10 + '0';
	write(1, &m, 1);
	write(1, &k, 1);
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			inttochar(x);
			write(1, " ", 1);
			inttochar(y);
			if (x != 98 || y != 99)
				write(1, ", ", 2);
			y++;
		}
		x++;
	}
}
