/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeonsan.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 17:00:03 by jyoo              #+#    #+#             */
/*   Updated: 2024/08/25 21:06:03 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*temp;
	char	*arr; 
	
	i = 0;
	while(*strs[i])
		i++;
	arr = (char *)malloc(sizeof(char) * (size * i + (i - 1) * ft_strlen(sep) + 1));
	temp = arr;
	while (*strs)
	{
		ft_strcpy(arr, *strs);
		ft_strcpy(arr, sep);
		strs++;
	}
	return (temp);
}

