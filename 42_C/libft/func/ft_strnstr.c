/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeonsan.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 11:38:48 by jyoo              #+#    #+#             */
/*   Updated: 2024/10/05 11:49:19 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	
	i = -1;
	if (little[0] == 0)
		return ((void *)big);
	while (++i < len)
	{
		if (ft_strncmp(big + i, little, len))
			return (big + i);
	}
	return (void *(0));
}
