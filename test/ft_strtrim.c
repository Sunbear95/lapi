/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeonsan.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 17:55:17 by jyoo              #+#    #+#             */
/*   Updated: 2024/10/07 13:26:06 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*temp;
	int		len0;
	int		len1;

	len0 = ft_strlen(s1);
	len1 = ft_strlen(set);
	temp = (char *) calloc(1, (len0 + 1));
	if (!ft_strncmp(s1, set, len1))
	{
		if (!ft_strncmp(s1 + len0 - len1, set, len1))
		{
			temp = ft_strdup(s1 + len0);
			temp = (char *) malloc(sizeof(char) * (len0 -(2 * len1)));
		}
		temp = ft_strdup(s1 + len0);
	}
	else if (!ft_strncmp(s1 + len0 - len1, set, len1))
	{
		temp = ft_strdup(s1);
		temp = (char *) malloc(sizeof(char) * (len0 - len1));
	}
	else
		temp = ft_strdup(s1);
	return (temp);
}
