/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeonsan.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 16:18:49 by jyoo              #+#    #+#             */
/*   Updated: 2024/10/16 22:24:52 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *src)
{
	char	*copy;
	char	*temp;

	temp = (char *)src;
	copy = (char *)malloc(sizeof(char) * ft_strlen(temp) + 1);
	ft_strlcpy(copy, (char *)src, ft_strlen(temp) + 1);
	return (copy);
}
