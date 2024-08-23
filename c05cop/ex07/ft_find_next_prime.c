/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajikim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 03:09:33 by dajikim           #+#    #+#             */
/*   Updated: 2024/08/22 00:47:55 by dajikim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

int	ft_is_prime(int nb)
{
	int	f;

	if (nb <= 1)
		return (false);
	f = 2;
	while (f * f <= nb)
	{
		if (nb % f == 0)
			return (false);
		f++;
	}
	return (true);
}

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(++nb))
		;
	return (nb);
}
