/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeonsan.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 13:48:02 by jyoo              #+#    #+#             */
/*   Updated: 2024/10/03 14:19:38 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n && (s1[i] == s2[i]))
	{
		if (s1[i] == '\0')
			break ;
		i++;
	}
	if (i == n)
		return (0);
	return (s1[i] - s2[i]);
}
