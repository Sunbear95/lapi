/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeonsan.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 00:07:44 by jyoo              #+#    #+#             */
/*   Updated: 2024/08/24 00:38:50 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fac;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	fac = 1;
	while (0 < nb)
	{
		fac = fac * nb;
		nb--;
	}
	return (fac);
}
