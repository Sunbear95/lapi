/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dajikim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 01:00:55 by dajikim           #+#    #+#             */
/*   Updated: 2024/08/20 21:55:00 by dajikim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	p;

	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	p = 1;
	while (power--)
		p *= nb;
	return (p);
}
