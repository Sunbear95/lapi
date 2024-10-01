/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeonsan.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 22:14:10 by jyoo              #+#    #+#             */
/*   Updated: 2024/08/23 22:16:32 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ch_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (1);
		i++;
	}
	i = 0;
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	ch_leng(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
		i++;
	return (i);
}

void	recur_putchar(int nbr, char *base, int leng_base)
{
	char	a;

	if (nbr == 0)
		return ;
	if (nbr < 0)
	{
		a = base[-(nbr % leng_base)];
		recur_putchar((nbr / leng_base), base, leng_base);
		write (1, &a, 1);
	}
	else
	{
		a = base[nbr % leng_base];
		recur_putchar((nbr / leng_base), base, leng_base);
		write (1, &a, 1);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		leng_base;
	char	zero;

	leng_base = ch_leng(base);
	if (leng_base == 0 || leng_base == 1 || ch_base(base))
		return ;
	if (nbr == 0)
	{
		zero = base[0];
		write(1, &zero, 1);
		return ;
	}
	if (nbr < 0)
		write(1, "-", 1);
	recur_putchar(nbr, base, leng_base);
}
