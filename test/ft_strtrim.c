/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 17:55:17 by jyoo              #+#    #+#             */
/*   Updated: 2024/10/18 06:11:40 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countft(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		count;

	i = 0;
	j = 0;
	count = 0;
	while (set[i])
	{
		while (s1[j] == set[i])
		{
			count++;
			j++;
		}
		i++;
	}
	return (count);
}

int	ft_counted(char const *s1, char const *set, size_t len)
{
	int		i;
	int		j;
	int		count;

	i = 0;
	j = 0;
	count = 0;
	while (set[i])
	{
		while (s1[len - j - 1] == set[i])
		{
			count++;
			j++;
		}
		i++;
	}
	return (len - count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*temp;
	size_t	len;
	int		frt;
	int		end;

	len = ft_strlen(s1);
	frt = ft_countft(s1, set);
	end = ft_counted(s1, set, len);
	temp = ft_substr(s1, frt, end - frt);
	return (temp);
}
