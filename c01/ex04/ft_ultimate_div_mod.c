/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeonsan.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 11:41:22 by jyoo              #+#    #+#             */
/*   Updated: 2024/08/14 14:17:39 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tempa;
	int	tempb;

	tempa = *a / *b;
	tempb = *a % *b;

	a = &tempa;
	b = &tempb;
	printf("%d, %d",*a, *b);
}

int	main(void)
{
	int *x;
	int *y;
	int ten;
	int five;

	ten = 10;
	five = 5;

	x = &ten;
	y = &five;
	ft_ultimate_div_mod(*x, *y);
	
	printf("%d, %d", ten, five);
	return (0);
}
