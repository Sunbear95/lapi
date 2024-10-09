/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeonsan.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 18:37:01 by jyoo              #+#    #+#             */
/*   Updated: 2024/10/05 13:54:27 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_isspace(char **str)
{	
	while (**str == ' ' || **str == '\n' || **str == '\t'
		|| **str == '\v' || **str == '\f' || **str == '\r')
		(*str)++;
}

int	ft_pn(char **str)
{
	int	count;

	count = 0;
	while (**str == '-' || **str == '+')
	{
		if (**str == '-')
			count++;
		(*str)++;
	}
	if (count % 2 == 0)
		return (0);
	else
		return (1);
}

int	ft_atoi(char *str)
{
	int	n;
	int	min;

	min = 1;
	n = 0;
	ft_isspace(&str);
	if (ft_pn(&str))
		min *= -1;
	while (*str != 0)
	{
		if (*str >= '0' && *str <= '9')
		{
			n = 10 * n + (*str - '0');
			str++;
		}
		else
		{
			if (min == -1)
				return (-1 * n);
			return (n);
		}
	}
	return (min * n);
}
