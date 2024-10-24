/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 20:10:50 by jyoo              #+#    #+#             */
/*   Updated: 2024/10/18 07:12:10 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdlib.h>
#include "libft.h"

char	*ft_range(int min, int max, const char *str)
{
	char	*arr;
	int		i;

	arr = (char *)malloc(sizeof(char) * (max - min + 1));
	i = 0;
	while (min < max)
		arr[i++] = str[min++];
	arr[i] = '\0';
	return (arr);
}

char	**ft_split(char const *str, char c)
{
	int		i;
	int		k;
	int		j;
	char	**arr;

	i = 0;
	k = 0;
	j = 0;
	arr = (char **)malloc(sizeof(char *) * (ft_strlen(str) + 1));
	while (str[i])
	{
		if (!ft_strncmp(str, &c, 1))
		{
			if (i > j)
				arr[k++] = ft_range(j, i, str);
			j = i + 1;
		}
		i++;
	}
	if (i > j)
		arr[k++] = ft_range(j, i, str);
	arr[k] = NULL;
	return (arr);
}*/

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strcmp(char *s1, char *s2, int i)
{
	int	j;

	j = 0;
	while (s2[j] != '\0')
	{
		if (s1[i] == s2[j])
			return (0);
		j++;
	}
	return (1);
}

char	*ft_range(int min, int max, char *str)
{
	char	*arr;
	int		i;

	arr = (char *)malloc(sizeof(char) * (max - min + 1));
	i = 0;
	while (min < max)
		arr[i++] = str[min++];
	arr[i] = '\0';
	return (arr);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		k;
	int		j;
	char	**arr;

	i = 0;
	k = 0;
	j = 0;
	arr = (char **)malloc(sizeof(char *) * (ft_strlen(str) + 1));
	while (str[i])
	{
		if (!ft_strcmp(str, charset, i))
		{
			if (i > j)
				arr[k++] = ft_range(j, i, str);
			j = i + 1;
		}
		i++;
	}
	if (i > j)
		arr[k++] = ft_range(j, i, str);
	arr[k] = NULL;
	return (arr);
}
