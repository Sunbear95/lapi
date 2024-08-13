/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeonsan.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 22:57:25 by jyoo              #+#    #+#             */
/*   Updated: 2024/08/12 23:55:30 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_print_comb(void)
{
	char	arr[3];

	arr[0] = '0';
	arr[1] = '1';
	arr[2] = '2';
	while (arr[0] < '8')
	{
		arr[1] = arr[2];
		while (arr[0] < '9')
		{
			arr[1]++;
			arr[2] = arr[1];
			while (arr[1] <= '9')
			{
				arr[2]++;
				write (1, &arr[0], 3);
				write (1, " ", 1);
			}
		}
		arr[0]++;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
