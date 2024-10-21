/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeonsan.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 23:24:30 by jyoo              #+#    #+#             */
/*   Updated: 2024/10/22 00:41:25 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_numleng(int n)
{
	size_t	i;

	i = 0;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoasub(int n, int len, char *arr)
{
	int		i;

	if (n == -2147483648)
		return ("-2147483648");
	if (n < 0)
	{
		n *= -1;
		arr[0] = '-';
		len++;
	}
	i = 0;
	while (n != 0)
	{
		arr[len - i - 1] = n % 10 + '0';
		n /= 10;
		i++;
	}
	arr[len] = '\0';
	return (arr);
}

char	*ft_itoa(int n)
{
	char	*arr;
	int		len;

	if (n == 0)
		return ("0");
	len = ft_numleng(n);
	arr = (char *)ft_calloc(len + 1, sizeof (char));
	arr = ft_itoasub(n, len, arr);
	return (arr);
}
