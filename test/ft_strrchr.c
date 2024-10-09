/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeonsan.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 11:45:19 by jyoo              #+#    #+#             */
/*   Updated: 2024/10/09 12:10:28 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <string.h>

char	*ft_strrchr(const char *string, int c)
{
	int		i;
	int		j;
	char	*temp;

	i = -1;
	j = 0;
	while (string[++i] != 0)
	{
		if (string[i] == c)
			j = i;
	}
	if (j == 0)
		return (0);
	temp = (char *)(string + j);
	return (temp);
}
