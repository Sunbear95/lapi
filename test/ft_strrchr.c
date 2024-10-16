/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeonsan.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 11:45:19 by jyoo              #+#    #+#             */
/*   Updated: 2024/10/15 12:14:44 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		j;

	i = ft_strlen((char *)s);
	j = 0;
	while (j != i)
	{
		if (s[i - j] == c)
			return ((char *)(s + i - j));
		j++;
	}
	return (0);
}
