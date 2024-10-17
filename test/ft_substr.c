/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 16:33:57 by jyoo              #+#    #+#             */
/*   Updated: 2024/10/18 00:49:26 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*temp;
	char	*temp2;

	temp2 = (char *)s;
	temp = (char *)ft_calloc(len + 1, sizeof (char));
	ft_strlcpy(temp, temp2 + start, len + 1);
	return (temp);
}
