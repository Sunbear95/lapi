/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeonsan.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 20:10:50 by jyoo              #+#    #+#             */
/*   Updated: 2024/08/31 20:00:23 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	nword(char *str)
{
	int	i;
	int	up;
	int	num;

	i = 0;
	up = 1;
	while (str[i])
	{
		while ()
		{
			up = 1;
			i++;
		}
		while (up == 1 && !(str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
		{
			up = 0;
			i++;
			num++;
		}
	}
	return (num);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

int	ft_strcmp(char *s1, char *s2, int i)
{
	int	j;

	j = 0;
	while (s1[i] != s2[j])
	{
		if (s1[i] ==  s2[i] || s2[j] = 0)
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

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		k;
	int		j;
	char	**arr;

	i = 0;
	k = -1;
	j = 0;
	arr = (char **)malloc(sizeof(char) * (strlne(str) + 1));
	while (str[i])
	{
		if (ft_strcmp(str, charset, i) == 0 && i - j > 1 || !str[i + 1])
		{	
			arr[++k] = ft_range(j, i, str);
			j = i;
		}
		i++;
	}
	return (arr);
}
