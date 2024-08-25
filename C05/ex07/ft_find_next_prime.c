/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeonsan.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 03:14:38 by jyoo              #+#    #+#             */
/*   Updated: 2024/08/24 03:23:05 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	opti;

	if (nb < 2)
		return (2);
	opti = 2;
	while (opti * opti < nb + 1)
	{
		if (nb % opti == 0)
		{
			opti = 1;
			nb++;
		}
		opti++;
	}
	return (nb);
}
