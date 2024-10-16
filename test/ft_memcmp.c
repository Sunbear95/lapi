/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeonsan.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 20:44:14 by jyoo              #+#    #+#             */
/*   Updated: 2024/10/16 22:07:22 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ucs1;
	unsigned char	*ucs2;

	i = 0;
	ucs1 = (unsigned char *)s1;
	ucs2 = (unsigned char *)s2;
	if (ucs1[0] == 0)
		return (-ucs2[0]);
	while ((ucs1[i] != 0) && (i < n))
	{
		if (ucs2[i] != ucs1[i])
			return (ucs1[i] - ucs2[i]);
		i++;
	}
	return (0);
}
