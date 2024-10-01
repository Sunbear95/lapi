/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeonsan.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 00:25:58 by jyoo              #+#    #+#             */
/*   Updated: 2024/08/24 00:40:02 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	jegob ;

	jegob = 1;
	if (power < 0)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	while (0 < power--)
		jegob *= nb;
	return (jegob);
}
