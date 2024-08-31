/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeonsan.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 20:10:50 by jyoo              #+#    #+#             */
/*   Updated: 2024/08/31 21:17:36 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strcmp(char *s1, char *s2, int i)
{
	int	j;

	j = 0;
	while (s1[i] != s2[j])
	{
		if (s1[i] ==  s2[i] || s2[j] == 0)
			break ;
		j++;
	}
	return (s1[i] - s2[j]);
}

char	*ft_range(int min, int max, char *str)
{
	char	*arr;
	int	i;

	if (max <= min)
		return (0);
	i = 0;
	arr = (char *)malloc(sizeof(char) * (max - min));
	while (i < (max - min - 1))
	{
		arr[i] = str[min + i + 1];
		i++;
	}
	arr[max - min - 1] = '\0';
	return (arr);
}

int	ch_charset(int j, char *str, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != 0)
	{
		if (str[j + 1] == charset[i])
			return (1);
		i++;
	}
	return (0);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		k;
	int		j;
	char	**arr;

	i = 0;
	k = -1;
	j = 0;
	while (str[i] != 0)
		i++;
	arr = (char **)malloc(sizeof(char) * (i + 1));
	i = 0;
	while (str[i])
	{
		if (ft_strcmp(str, charset, i) == 0  || !str[i + 1])
		{	
			arr[++k] = ft_range(j, i, str);
			j = i;
		}
		else if (
		i++;
	}
	return (arr);
}
