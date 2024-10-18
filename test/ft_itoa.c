/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 13:51:13 by jyoo              #+#    #+#             */
/*   Updated: 2024/10/19 01:57:00 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "libft.h"

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
			return (ft_strdup("-2147483648"));
		temp = (char *)ft_calloc((len + 2), sizeof (char));
		temp[0] = '-';
	}
	else
		temp = (char *)ft_calloc((len + 1), sizeof (char));
	num = posn(n);
	temp[len--] = '\0';
	while (len > 0)
		temp[len--] = (num % 10);
	return (temp);
}*/

#include "libft.h" 

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
		// INT_MIN 처리 필요
		if (n == -2147483648)
			return (ft_strdup("-2147483648"));
		num = -n;
		temp = (char *)ft_calloc((len + 2), sizeof(char)); // 음수인 경우 +2 (부호와 널 문자)
		if (!temp)
			return (NULL);
		temp[0] = '-';
	}
	else
	{
		num = n;
		temp = (char *)ft_calloc((len + 1), sizeof(char)); // 양수인 경우 +1 (널 문자)
		if (!temp)
			return (NULL);
	}
	// 문자열 끝에 널 문자 추가
	temp[len--] = '\0';

	// 0인 경우를 따로 처리
	if (n == 0)
		temp[0] = '0';
	
	while (num > 0)
	{
		temp[len--] = (num % 10) + '0'; // 숫자를 문자로 변환
		num /= 10;
	}
	return (temp);
}
