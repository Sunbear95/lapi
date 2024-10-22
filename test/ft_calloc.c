/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 16:11:04 by jyoo              #+#    #+#             */
/*   Updated: 2024/10/19 02:35:22 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*uctemp;

	uctemp = (unsigned char *) malloc(sizeof(size) * nmemb);
	ft_bzero((void *)uctemp, nmemb);
	return ((void *)uctemp);
}
