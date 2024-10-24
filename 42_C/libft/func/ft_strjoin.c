/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeonsan.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 17:16:17 by jyoo              #+#    #+#             */
/*   Updated: 2024/10/17 03:36:42 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*temp;

	temp = (char *)ft_calloc(ft_strlen(s1) + ft_strlen(s2) + 1, sizeof (char));
	ft_strlcpy(temp, s1, ft_strlen(s1) + 1);
	ft_strlcpy(temp + ft_strlen(s1), s2, ft_strlen(s2) + 1);
	return (temp);
}
