/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeonsan.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 14:30:05 by jyoo              #+#    #+#             */
/*   Updated: 2024/10/05 15:53:06 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*memchr(void *ptr, int value, size_t num)
{
	size_t	i;
	unsigned char	*usptr;
	unsigned char	usvalue;

	usptr = (unsigned char *) ptr;
	usvalue = (unsigned char) value;

	i = 0;
	while ((usptr[i] != usvalue) && (i < num))
		i++
	if (usptr[i] == 0)
		return (0);
	return ((void) usptr[i]);
}
