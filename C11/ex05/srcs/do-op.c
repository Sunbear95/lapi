/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeonsan.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 22:35:51 by jyoo              #+#    #+#             */
/*   Updated: 2024/09/01 23:33:50 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "do-op.h"

void	cal(int a, int b, char *giho)
{
	if (giho[0] == '+')
		ft_putnbr(a + b);
	else if (giho[0] == '-')
		ft_putnbr(a - b);
	else if (giho[0] == '*')
		ft_putnbr(a * b);
	else if (giho[0] == '/' && b == 0)
		write (1, "Stop : division by zero\n", 24);
	else if (giho[0] == '%' && b == 0)
		write (1, "Stop : modulo by zero\n", 22);
	else if (giho[0] == '%')
		ft_putnbr(a % b);
	else if (giho[0] == '/')
		ft_putnbr(a / b);
	else
		write (1, "0\n", 2);
}

int	main(int ac, char **av)
{
	int	a;
	int	b;
	(void)ac;
	if (ft_strlen(av[2]) != 1)
	{
		write (1, "0\n", 2);
		return (0);
	}
	a = ft_atoi(av[1]);
	b = ft_atoi(av[3]);
	cal(a, b, av[2]);
	return (0);
}
