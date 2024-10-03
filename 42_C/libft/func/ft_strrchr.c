/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeonsan.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 11:45:19 by jyoo              #+#    #+#             */
/*   Updated: 2024/10/03 14:01:35 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*strrchr(const char *string, int c)
{
	int	i;
	int	j;

	i = -1;
	j = 0;
	while (string[++i] != 0)
	{
		if (string[i] == c)
			j = i;
	}
	return (string[j]);
}
