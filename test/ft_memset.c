/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeonsan.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 15:54:57 by jyoo              #+#    #+#             */
/*   Updated: 2024/10/03 11:17:30 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	unsigned char	*ucptr;
	unsigned char	ucvalue;
	size_t			i;

	ucptr = (unsigned char *) ptr;
	ucvalue = (unsigned char) value;
	i = -1;
	while (++i <= num)
		ucptr[i] = ucvalue;
	return ((void *) ucptr);
}
