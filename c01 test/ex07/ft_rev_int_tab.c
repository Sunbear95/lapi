/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeonsan.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 17:46:46 by jyoo              #+#    #+#             */
/*   Updated: 2024/08/16 03:05:42 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	b;

	b = 0;
	temp = 0;
	while (b < size / 2)
	{	
		temp = tab[b];
		tab[b] = tab[size - 1 - b];
		tab[size -1 - b] = temp;
		b++;
	}
}