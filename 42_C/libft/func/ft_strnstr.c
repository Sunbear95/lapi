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
	int	i;
	int	j;
	int	flag;

	i = -1;
	j = 0;
	flag = 0;
	if (little[0] == 0)
		return ((void *)big);
	while (++i < len)
	{
		if (big[i] == little[j])
		{
			flag = 1;
			j++;
		}
		else
		{
			flag = 0;
			j = 0;
		}
		if (little[j] == 0)
			return ((void) big[i]);
	}
	return (void *(0));
}
