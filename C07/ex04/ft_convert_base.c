/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeonsan.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 15:30:29 by jyoo              #+#    #+#             */
/*   Updated: 2024/08/31 18:36:18 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ch_base(char *base);
int	ft_pn(char **str);
int	cmp(char *str, char *base, int i);
int	ft_atoi_base(char *str, char *base);

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char src)
{
	unsigned int	j;

	j = ft_strlen(dest);
	dest[j] = src;
	dest[j + 1] = '\0';
	return (dest);
}

void	recur_putchar(int nbr, char *base, int leng_base, char *arr)
{
	char	a;

	if (nbr == 0)
		return ;
	if (nbr < 0)
	{
		a = base[-(nbr % leng_base)];
		recur_putchar((nbr / leng_base), base, leng_base, arr);
		ft_strcat(arr, a);
	}
	else
	{
		recur_putchar((nbr / leng_base), base, leng_base, arr);
		a = base[nbr % leng_base];
		ft_strcat(arr, a);
	}
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		a;
	int		i;
	char	*arr;

	arr = (char *)malloc(sizeof(char) * 34);
	if (!arr)
		return (NULL);
	if (ch_base(base_from) <= 1 || ch_base(base_to) <= 1)
		return (0);
	i = -1;
	while (++i < 34)
		arr[i] = 0;
	a = ft_atoi_base(nbr, base_from);
	if (a < 0)
		arr[0] = '-';
	if (a == 0)
	{
		arr[0] = base_to[0];
		return (arr);
	}
	recur_putchar(a, base_to, ch_base(base_to), arr);
	return (arr);
}
