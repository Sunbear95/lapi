/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeonsan.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 14:30:05 by jyoo              #+#    #+#             */
/*   Updated: 2024/10/09 12:55:24 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memchr(const void *ptr, int value, size_t num)
{
	size_t			i;
	unsigned char	*usptr;

	usptr = (unsigned char *) ptr;
	i = 0;
	while ((usptr[i] != value) && (i < num))
		i++;
	if (usptr[i] == 0)
		return (0);
	return ((void *)(usptr + i));
}
