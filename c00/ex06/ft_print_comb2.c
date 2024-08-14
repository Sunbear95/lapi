/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeonsan.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 15:32:28 by jyoo              #+#    #+#             */
/*   Updated: 2024/08/15 08:10:58 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char *str, int strl)
{
	write (1, str, strl);
}

void	ft_print_comb(char *arr)
{
	arr[2] = arr[0];
	arr[3] = arr[2] + 1;
	while (arr[2] <= '9')
	{
		while (arr[3] <= '9')
		{
			ft_putchar(arr, 2);
			ft_putchar(" ", 1);
			ft_putchar(arr +2, 2);
			if (arr[0] != '9' && arr[1] != '8')
			{
				write (1, ", ", 2);
			}
			arr[3]++;
		}
		arr[2]++;
		arr[3] = '0';
	}
}

void	ft_print_comb2(void)
{
	char	arr[4];

	arr[0] = '0';
	while (arr[0] <= '9')
	{
		arr[1] = '0';
		while (arr[1] <= '9')
		{	
			arr[2] = arr[0];
			arr[3] = arr[2] + 1;
			while (arr[2] <= '9')
			{
				ft_print_comb(arr);
			}
			arr[1]++;
		}
		arr[0]++;
	}
	ft_putchar("98 99", 5);
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
