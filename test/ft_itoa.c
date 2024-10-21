/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 13:51:13 by jyoo              #+#    #+#             */
/*   Updated: 2024/10/21 00:39:41 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	posn(int n)
{
	if (n < 0)
		return (-n);
	if (n >= 0)
		return (n);
	return (n);
}

int	num_leng(int num)
{
	int		leng;

	leng = 0;
	if (num == 0)
		return (1);
	while (num != 0)
	{
		leng++;
		num /= 10;
	}
	return (leng);
}

char	*ft_itoa(int n)
{
	char	*temp;
	int		num;
	int		len;

	len = num_leng(n);
	if (n < 0)
	{
		if (n == -2147483648)
			return (strdup("-2147483648"));
		len++;
		temp = (char *)calloc((len + 1), sizeof (char));
		temp[0] = '-';
	}
	else
		temp = (char *)calloc((len + 1), sizeof (char));
	num = posn(n);
	temp[len] = '\0';
	while (len-- > 0)
	{
		if (n < 0 && len == 0)
			break ;
		temp[len] = (num % 10) + '0';
		num /= 10;
	}
	return (temp);
}

int	main ()
{
	printf("%s", ft_itoa(123));
	return (0);
}
