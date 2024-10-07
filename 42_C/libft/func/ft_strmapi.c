/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeonsan.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 15:06:34 by jyoo              #+#    #+#             */
/*   Updated: 2024/10/07 16:18:26 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char temp;
	int		i;

	i = 0;

	temp = (char *) calloc(sizeof(char) * (ft_strlen(s) + 1));
	while (s[++i])
		temp[i] = f(i, s[i]);
	temp[i] = 0;
	return (0);
}
