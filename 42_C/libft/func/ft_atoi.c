/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeonsan.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 18:37:01 by jyoo              #+#    #+#             */
/*   Updated: 2024/10/17 00:30:44 by jyoo             ###   ########.fr       */
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
	int	i;

	count = 0;
	i = 0;
	while (**str == '-' || **str == '+')
	{
		if (**str == '-')
			count++;
		(*str)++;
		i++;
	}
	if (i > 1)
		return (0);
	else if (count == 1)
		return (-1);
	else
		return (1);
}

int	ft_atoi(char *str)
{
	int	n;
	int	pn;

	n = 0;
	ft_isspace(&str);
	pn = ft_pn(&str);
	if (pn == 0)
		return (0);
	while (*str != 0)
	{
		if (*str >= '0' && *str <= '9')
		{
			n = 10 * n + (*str - '0');
			str++;
		}
		else
			return (pn * n);
	}
	return (pn * n);
}
