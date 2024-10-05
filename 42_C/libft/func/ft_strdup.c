/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeonsan.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 16:18:49 by jyoo              #+#    #+#             */
/*   Updated: 2024/10/05 16:33:09 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *src)
{
	const char	*copy;

	copy = (char *)malloc(sizeof(char) * ft_strlen(src) + 1);
	ft_strlcpy(copy, src, ft_strlen(src));
	return (copy);
}
