/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeonsan.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 10:24:10 by jyoo              #+#    #+#             */
/*   Updated: 2024/08/16 11:21:12 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_in_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	n;
	int	m;

	m = 0;
	while (m < size)
	{
		i = 0;
		j = 0;
		while (i < size)
		{
			j = i + 1;
			while (tab[i] > tab[j])
			{
				n = tab[i];
				tab[i] = tab[j];
				tab[j] = n;
			}
			i++;
		}
		m++;
	}
}
