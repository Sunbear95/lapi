/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeonsan.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 15:05:39 by jyoo              #+#    #+#             */
/*   Updated: 2024/09/27 16:38:31 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	fac(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	if (nb == 10)
		return (3628800);
	return (nb * fac(nb - 1));
}

int	ft_iterative_factorial(int nb)
{
	int	temp;

	temp = fac(nb);
	return (temp);
}
