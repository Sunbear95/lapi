/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeonsan.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 18:42:14 by jyoo              #+#    #+#             */
/*   Updated: 2024/08/21 21:08:51 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char *str, int strl)
{
	write (1, str, strl);
}

void	arry_rev(char *str, int c)
{
	int	r;

	r = c - 1;
	while (r >= 0)
	{
		write (1, &str[r], 1);
		r--;
	}
}

void	min_nb(int nb_)
{
	int		m;
	int		i;
	char	u;
	char	mnbar[12];

	m = 0;
	if (nb_ == -2147483648)
	{
		write (1, "-2147483648", 11);
	}
	else
	{
		nb_ = -nb_;
		while (nb_ > 0)
		{
			i = nb_ % 10;
			u = i + '0';
			mnbar[m] = u;
			m++;
			nb_ = nb_ / 10;
		}
		ft_putchar("-", 1);
		arry_rev(mnbar, m);
	}
}

void	plus_nb(int nb)
{
	int		n;
	int		k;
	char	nbar[11];
	char	j;

	n = 0;
	while (nb > 0)
	{
		k = nb % 10;
		j = k + '0';
		nbar[n] = j;
		n++;
		nb = nb / 10;
	}
	arry_rev(nbar, n);
}

void	ft_putnbr(int nb)
{	
	if (nb > 0)
	{
		plus_nb(nb);
	}
	else if (nb == 0)
		write(1, "0", 1);
	else
	{
		min_nb(nb);
	}
}
