/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeonsan.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 20:44:14 by jyoo              #+#    #+#             */
/*   Updated: 2024/10/04 20:58:58 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	memcmp(const void *ptr1, const void *ptr2, size_t num)
{
	size_t	i;
	unsigned char	*ucptr1;
	unsigned char	*ucptr2;

	i = -1;
	ucptr1 = (unsigned char *)ptr1;
	ucptr2 = (unsigned char *)ptr2;

	while ((ptr1[++i] != 0) && (i < num))
	{
		if (ucptr2[i] != ucptr1[i])
			return (ucptr1[i] - ucptr2[i]);
	}
	return (0);
}
