/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeonsan.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 16:11:04 by jyoo              #+#    #+#             */
/*   Updated: 2024/10/05 16:30:58 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <strings.h>

void	*calloc(size_t nmemb, size_t size)
{
	unsigned char *	uctemp;

	uctemp = (unsigned char *) malloc(sizeof(size) * nmemb);
	uctemp = bzero((void *)uctemp, nmemb);
	return ((void *)uctemp);
}
