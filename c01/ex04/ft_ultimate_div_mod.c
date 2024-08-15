/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeonsan.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 11:41:22 by jyoo              #+#    #+#             */
/*   Updated: 2024/08/15 19:17:30 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tempa;
	int	tempb;

	tempa = *a / *b;
	tempb = *a % *b;

	a = &tempa;
	b = &tempb;
	printf("%d, %d\n",*a, *b);
}

int	main(void)
{
	int ten;
	int five;

	ten = 10;
	five = 5;

	ft_ultimate_div_mod(&ten, &five);
	
	printf("%d, %d", ten, five);
	return (0);
}
