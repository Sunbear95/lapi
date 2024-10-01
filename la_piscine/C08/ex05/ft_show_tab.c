/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeonsan.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 17:02:06 by jyoo              #+#    #+#             */
/*   Updated: 2024/08/31 15:42:21 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str);
char	*ft_strdup(char *str);
struct	s_stock_str	*ft_strs_to_tab(int ac, char **av);

char	*itoa(int num)
{
	char	*arr;
	int	i;
	int	j;
	int	temp;
	
	arr = (char *)malloc(sizeof(char) * 12);
	j = 0;
	temp = num;
	while (temp != 0)
	{
		temp /= 10;
		j++;
	}
	i = -1;
	if (num < 0)
	{
		arr[0] = '-';
		i++;
	}
	while (++i == 0)
	{
		arr[j - i - 1] = num % 10 + '0';
		num /= 10;
	}
	arr[j] = '\0';
	return (arr);	
}
		
void	ft_show_tab(struct s_stock_str *par)
{
	int	i;
	int	j;
	int	num;

	i = 0;
	while (par[i].str)
	{	
		num = par[i].size;
		j = 0;
		while (num != 0)
		{
			j++;
			num /= 10;
		}
		write(1, par[i].str, par[i].size);
		write(1, "\n", 1);
		write(1, itoa(par[i].size), j);
		write(1, "\n", 1);
		write(1, par[i].copy, par[i].size);
		write(1, "\n", 1);
		i++;
	}
}
