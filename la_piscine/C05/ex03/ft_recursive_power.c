/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeonsan.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 00:49:50 by jyoo              #+#    #+#             */
/*   Updated: 2024/08/24 21:54:47 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (0 > power)
		return (0);
	if (nb == 0 && power == 0)
		return (1);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
