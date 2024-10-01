/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04_0.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smun <smun@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 12:26:05 by frdescam          #+#    #+#             */
/*   Updated: 2020/07/16 17:35:31 by smun             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	char	*copy;
	int		i;

	copy = (char *)malloc(sizeof(char) * ft_strlen(str) + 1);
	i = 0;
	while (str[i])
	{
		copy[i] = str[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

struct	s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*arr;
	int	i;

	if (ac < 0)
		return (NULL);
	arr = (t_stock_str *)malloc(sizeof(t_stock_str) * ac + 1);
	if(!arr)
		return (NULL);
	i = 0;
	while (i < ac)
	{
	//	if(av[i])
	//	{
		arr[i].size = ft_strlen(av[i]);
		arr[i].str = av[i];
		arr[i].copy = ft_strdup(av[i]);
	//	}
		i++;
	}
	arr[i].size = 0;
	arr[i].str = 0;
	arr[i].copy = 0;
	return (arr);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int nbr)
{
	long	nb;
	int		i;
	char	c[10];

	nb = nbr;
	if (nb == 0)
		ft_putchar('0');
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	i = 0;
	while (nb > 0)
	{
		c[i] = nb % 10 + '0';
		nb = nb / 10;
		i++;
	}
	i--;
	while (i >= 0)
	{
		ft_putchar(c[i]);
		i--;
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int		i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str);
		ft_putchar('\n');
		ft_putnbr(par[i].size);
		ft_putchar('\n');
		ft_putstr(par[i].copy);
		ft_putchar('\n');
		i++;
	}
}
