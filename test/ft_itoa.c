/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeonsan.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 13:51:13 by jyoo              #+#    #+#             */
/*   Updated: 2024/10/07 15:03:38 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	num_leng(int num)
{
	int		leng;

	leng = 0;
	if (num == 0)
		return (1);
	while (num > 0)
	{
		leng++;
		num /= 10;
	}
	return (leng);
}

char	*ft_itoa(int n)
{
	char	*temp;
	int		i;
	int		num;

	if (n < 0)
	{
		num = -n;
		temp = (char *)calloc(1, (num_leng(num) + 2));
		temp[0] = '-';
		i = 0;
	}
	else
	{
		num = n;
		temp = (char *)calloc(1, (num_leng(num) + 1));
		i = 1;
	}
	while (num != 0)
	{
		temp[num_leng(num) - i] = (num % 10);
		i++;
	}
	return (temp);
}
