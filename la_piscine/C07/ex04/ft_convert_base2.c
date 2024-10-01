/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeonsan.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 22:33:59 by jyoo              #+#    #+#             */
/*   Updated: 2024/08/28 22:34:03 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ch_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' '
			|| base[i] == '\n' || base[i] == '\t'
			|| base[i] == '\v' || base[i] == '\f' || base[i] == '\r')
			return (1);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (i);
}

int	ft_pn(char **str)
{
	int	count;

	count = 0;
	while (**str == ' ' || **str == '\n' || **str == '\t'
		|| **str == '\v' || **str == '\f' || **str == '\r')
		(*str)++;
	while (**str == '-' || **str == '+')
	{
		if (**str == '-')
			count++;
		(*str)++;
	}
	if (count % 2 == 0)
		return (1);
	else
		return (-1);
}

int	cmp(char *str, char *base, int i)
{
	int	j;

	j = 0;
	while (str[i] != base[j])
	{
		j++;
		if (base[j] == 0)
			return (-1);
	}
	return (j);
}

int	ft_atoi_base(char *str, char *base)
{
	int	n;
	int	min;
	int	i;
	int	lg;

	i = -1;
	lg = 0;
	if (ch_base(base) <= 1)
		return (0);
	min = ft_pn(&str);
	while (str[++i] != 0)
		lg++;
	n = 0;
	i = 0;
	while (i < lg)
	{
		if (cmp(str, base, i) == -1)
			break ;
		n = ch_base(base) * n + cmp(str, base, i);
		i++;
	}
	return (min * n);
}
