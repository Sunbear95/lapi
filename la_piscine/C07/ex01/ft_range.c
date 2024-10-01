/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeonsan.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 16:45:18 by jyoo              #+#    #+#             */
/*   Updated: 2024/08/25 21:09:07 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	if (max <= min)
		return (0);
	i = 0;
	arr = (int *)malloc(sizeof(int) * (max - min + 1));
	while (i < (max - min))
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}
