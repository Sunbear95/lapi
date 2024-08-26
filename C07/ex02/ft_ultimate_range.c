/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeonsan.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 22:48:04 by jyoo              #+#    #+#             */
/*   Updated: 2024/08/26 20:09:47 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (max <= min)
	{
		*range = NULL;
		return (0);
	}
	i = 0;
	*range = (int *)malloc(sizeof(int) * (max - min));
	while (i < (max - min))
	{
		(*range)[i] = min + i;
		i++;
	}
	return (max - min);
}
