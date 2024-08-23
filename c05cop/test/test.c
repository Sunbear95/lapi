/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeonsan.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 01:51:00 by jyoo              #+#    #+#             */
/*   Updated: 2024/08/23 01:51:38 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_sqrt(int nb)
{
	int	s;

	s = 1;
	while (s * s <= nb)
	{
		if (s * s == nb)
			return (s);
		s++;
	}
	return (0);
}

int main(void)
{
	for (int i = -4; i <= 100; i++)
		printf("sqrt(%d) = %d\n", i, ft_sqrt(i));
	printf("sqrt(%d) = %d\n", 2147483647, ft_sqrt(2147483647));
	printf("sqrt(%d) = %d\n", (int)0x80000000, ft_sqrt((int)0x80000000));
	printf("sqrt(%d) = %d\n", 494949494, ft_sqrt(494949494));
	printf("sqrt(%d) = %d\n", 499949494, ft_sqrt(499949494));
	for (int i = 2147395598; i <= 2147395620; i++)
		printf("sqrt(%d) = %d\n", i, ft_sqrt(i));
}
