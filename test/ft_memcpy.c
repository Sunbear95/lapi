/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeonsan.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 21:36:46 by jyoo              #+#    #+#             */
/*   Updated: 2024/10/05 10:51:41 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *source, size_t num)
{
	size_t	i;
	unsigned char	*ucdest;
	unsigned char	*ucsource;

	ucdest = (unsigned char *)dest;
	ucsource = (unsigned char *)source;
	i = -1;

	while ((ucsource[++i] != 0) && (i < num))
		ucdest[i] = ucsource[i];
	return ((void *)ucdest);
}
