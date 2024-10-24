/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 20:10:50 by jyoo              #+#    #+#             */
/*   Updated: 2024/10/24 12:34:07 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen_c(char const *s, char c)
{
	int		i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	if (i == 0)
		return (1);
	return (i);
}

void	freeall(char **temp, int j)
{
	while (--j)
		free(temp[j]);
	free(temp);
}

char	**ft_split(char	const *s, char c)
{
	char	**temp;
	int		i;
	int		j;
	int		ti;

	temp = (char **)ft_calloc(ft_strlen(s), sizeof (char));
	if (!temp)
		return (0);
	i = 0;
	j = 0;
	ti = 0;
	while (s[i])
	{
		temp[j] = ft_substr(s, i, ft_strlen_c(s + i, c));
		ti++;
		if (temp[j] == 0)
			freeall(temp, j);
		j++;
		i += ft_strlen_c(s + i, c);
	}
	free(temp);
	temp = (char **)malloc (sizeof (char) * ti + 1);
	temp[ti] = 0;
	return (temp);
}
