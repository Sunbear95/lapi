/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeonsan.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 11:35:13 by jyoo              #+#    #+#             */
/*   Updated: 2024/10/09 12:01:34 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <string.h>

char	*ft_strchr(const char *string, int c)
{
	int		i;
	char	*temp;

	i = -1;
	while (string[++i] != c)
	{
		if (string[i] == 0)
			return (0);
	}
	temp = (char *)(string + i);
	return (temp);
}
