/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeonsan.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 17:55:17 by jyoo              #+#    #+#             */
/*   Updated: 2024/10/05 20:03:08 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*temp;
	size_t	len;
	

	temp = (char *) calloc(sizeof(char) * (ft_strlen(s1)));
	if (ft_strncmp(s1, set, ft_strlen(set)))
	{
		len = ft_strlen(s1) - ft_strlen(set);
		if (ft_strncmp(s1 + (ft_strlen(s1) - ft_strlen(set))), set, ft_strlen(set))
			len = ft_strlen(s1) - (2 * ft_strlne(set));
	}
	else (ft_strncmp(s1 + (ft_strlen(s1) - ft_strlne(set))), set, ft_strlen(set))
		len = ft_strlen(s1) - ft_strlen(set);

