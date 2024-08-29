/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeonsan.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 15:30:29 by jyoo              #+#    #+#             */
/*   Updated: 2024/08/29 06:05:51 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <libstd.h>

int	ch_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
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

char	*to_b(int a, char *base to)
{
	char	*temp;
	int		i;
	int		lg;
	
	
	while(a > 0)
	{
		if (a % 10 > ch_base(base_to))

		
	while(a > 0)
	{
		
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		a;
	int		min;
	char	*temp;
	char	*arr;
	
	if(ch_base(base_from) <= 1 || ch_(base_to) <= 1)
		return (0);
	a = ft_atoi_base(*nbr, *base_from);
	if (a < 0)
		a *= -1;
		min = -1;
	while (a > 0)
	{
		temp = (char *)malloc(sizeof(char) * (ch_base(base[a % ch_base]) + 1);
		while 
		a / ch_base


	return (arr);
