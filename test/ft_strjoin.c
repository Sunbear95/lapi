/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeonsan.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 17:16:17 by jyoo              #+#    #+#             */
/*   Updated: 2024/10/05 17:53:46 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*temp;

	temp = (char *)calloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)));
	temp = ft_strncpy(temp, s1, ft_strlen(s1));
	temp = ft_strncpy(temp[ftstrlen(s1)], s2, ft_strlen(s2));
	return (temp);
}
