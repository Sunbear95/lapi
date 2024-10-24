/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 16:33:57 by jyoo              #+#    #+#             */
/*   Updated: 2024/10/24 19:07:59 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*temp;
	char	*temp2;
	int		strl;

	strl = ft_strlen(s);
	if (strl <= start || len <= 0)
		return (ft_strdup(""));
	if (strl < len)
		temp = (char *)ft_calloc(len + 1, sizeof (char));
	else
		temp = (char *)ft_calloc(len + 1, sizeof (char));
	temp2 = (char *)s;
	if (!temp)
		return (0);
	ft_strlcpy(temp, temp2 + start, len + 1);
	return (temp);
}
