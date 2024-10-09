/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeonsan.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 10:29:47 by jyoo              #+#    #+#             */
/*   Updated: 2024/10/05 10:36:22 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void* dest, const void* source, size_t num)
{
	unsigned char	ucdest;
	unsigned char	ucsource;
	size_t	i;

	i = -1;

	ucdest = (unsigned char *) dest;
	ucsource = (unsigned char *)source;
	while (++i < num)
		ucdest[i] = ucsource[i];
	return ((void *)ucdest);
}
