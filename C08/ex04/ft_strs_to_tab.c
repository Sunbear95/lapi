/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeonsan.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 15:10:44 by jyoo              #+#    #+#             */
/*   Updated: 2024/08/29 17:00:40 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	int		i;
	char	a;

	i = ac;
	a = av;
}

t_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int		i;
	t_stock_str	*arr;
	char	*temp;
	
	i = ac;
	i = 0;
	while (av[1][i] != 0)
		i++;
	temp = (char *)malloc(sizeof(char) * i + 1);
	arr = (t_stock_str *)malloc(sizeof(t_stock_str));
	arr -> size = i;
	arr -> str = av[1];
	arr -> copy = av[1];
	return (arr);
}

