/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeongsan.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 11:38:48 by jyoo              #+#    #+#             */
/*   Updated: 2024/10/24 23:52:35 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	litlen;

	litlen = ft_strlen(little);
	if (!big || !little)
		return (0);
	if (little[0] == 0)
		return ((char *)big);
	if (len == 0)
		return (0);
	i = -1;
	while (++i + litlen <= len && (big[i] != 0))
	{
		if (!ft_strncmp(big + i, little, litlen))
			return ((char *)(big + i));
	}
	return (0);
}
