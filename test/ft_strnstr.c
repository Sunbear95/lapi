/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeonsan.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 11:38:48 by jyoo              #+#    #+#             */
/*   Updated: 2024/10/09 13:26:46 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	i = -1;
	if (little[0] == 0)
		return ((void *)big);
	while (++i < len)
	{
		if (ft_strncmp(big + i, little, len))
			return ((void *)(big + i));
	}
	return (0);
}
