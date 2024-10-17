/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeonsan.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 17:55:17 by jyoo              #+#    #+#             */
/*   Updated: 2024/10/17 19:25:20 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*temp;
	size_t	len;
	size_t	i;
	size_t	j;

	len = ft_strlen(s1);
	if (len == 0)
		return (0);
	temp = ft_strdup(s1);
	i = -1;
	while (set[++i])
	{
		if (s1[i] != set[i])
			break ;
		temp++;
	}
	j = -1;
	while (set[++j])
	{
		if (s1[len - j - 1 - i] == set[j])
			break ;
		temp[len - j - 1 - i] = '\0';
	}
	return (temp);
}
