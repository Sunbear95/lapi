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
	char	*temp1;
	char	*temp2;

	temp1 = (char *) s1;
	temp2 = (char *) s2;
	temp = (char *)calloc(1, (ft_strlen(s1) + ft_strlen(temp2)));
	ft_strlcpy(temp, temp1, ft_strlen(temp1));
	ft_strlcpy(temp + ft_strlen(temp1), temp2, ft_strlen(temp2));
	return (temp);
}
