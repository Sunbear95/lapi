/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeonsan.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 15:32:28 by jyoo              #+#    #+#             */
/*   Updated: 2024/08/13 18:32:32 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char *str, int strl)
{
	write (1, str, strl);
}

void	ft_print_comb(char *arr)
{
	char	arr2[2];
	
	arr2[0] = '0';
	arr2[1] = '0';
	while (arr2[0] <= '9')
	{
		arr2[1] = arr[1] +1;
		while (arr2[1] <= '9')
		{
			ft_putchar(arr, 2);
			ft_putchar(" ", 2);
			ft_putchar (arr2, 2);
			if (arr[0] != '9' || arr[1] != '8' || arr2[0] != '9' || arr2[1] != '9')
			{
				write (1, ", ", 2);
			}
			arr2[1]++;
		}
		arr2[0]++;
	}
}

void	ft_print_comb2(void)
{
	char	arr[2];

	arr[0] = '0';
	arr[1] = '0';
	while (arr[0] <= '9')
	{
		while (arr[1] <= '9')
		{	
			ft_print_comb(arr);
			arr[1]++;
		}
		arr[0]++;
		if 
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
