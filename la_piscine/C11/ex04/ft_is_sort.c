/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeonsan.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 19:56:48 by jyoo              #+#    #+#             */
/*   Updated: 2024/09/01 20:18:13 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	mod;

	i = 0;
	while (f(tab[i], tab[i + 1]) == 0)
		i++;
	if (f(tab[i], tab[i + 1]) < 0)
		mod = 1;
	else
		mod = -1;
	while (i + 1 < length)
	{
		if (mod == 1 && f(tab[i], tab[i + 1]) > 0)
			return (0);
		if (mod == -1 && f(tab[i], tab[i + 1]) < 0)
			return (0);
		i++;
	}
	return (1);
}
