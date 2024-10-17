/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 17:55:17 by jyoo              #+#    #+#             */
/*   Updated: 2024/10/18 02:45:19 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_trimed(char const *s1, char const *set, char *temp, size_t i)
{
	size_t	len;

	len = ft_strlen(temp);
	while (temp[len - 1] == set[i])
	{
			temp[len -  1] = 0;
			len--;
	}
	return (temp);
}

char	*ft_trimst(char const *s1, char const *set, char *temp, size_t i)
{
	size_t	j;

	j = 0;
	while (temp[j] == set[i])
	{
		temp++;
		j++;
	}
	return (temp);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*temp;
	size_t	i;

	temp = ft_strdup(s1);
	i = 0;
	while (set[i])
	{
		if (temp[0] == set[i])
			temp = ft_trimst(s1, set, temp, i);
		i++;
	}
	i = 0;
	while (set[i])
	{
		if (temp[len - 1] == set[i])
			temp = ft_trimed(s1, set, temp, i);
		i++;
	}
	return (0);
}
