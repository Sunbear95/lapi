/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 16:56:10 by jyoo              #+#    #+#             */
/*   Updated: 2024/10/22 16:26:41 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

static int	ft_power(int n, int time)
{
	int		temp;

	temp = 1;
	while (time-- > 0)
		temp = temp * n;
	return (temp);
}

static int	ft_numleng(int n)
{
	int		temp;

	temp = 0;
	while (n != 0)
	{	
		n /= 10;
		temp++;
	}
	return (temp);
}

void	ft_putnbr_fd(int n, int fd)
{
	char	c;
	int		len;

	if (n == -2147483648)
	{
		write (fd, "-2147483648", 11);
		return ;
	}
	if (n == 0)
		write (fd, "0", 1);
	len = ft_numleng(n);
	if (n < 0)
	{
		write (fd, "-", 1);
		n *= -1;
	}
	while (n != 0)
	{
		c = (n / ft_power(10, len - 1)) + '0';
		n = n % ft_power(10, len - 1);
		write (fd, &c, 1);
		len--;
	}
}
