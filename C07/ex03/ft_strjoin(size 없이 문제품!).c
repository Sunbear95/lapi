/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeonsan.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 17:00:03 by jyoo              #+#    #+#             */
/*   Updated: 2024/08/25 18:27:01 by jyoo             ###   ########.fr       */
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
	int		num;
	int		i;
	char	*temp;
	char	*arr; 
	num = 0;
	i = 0;

	while(strs[i])
	{
		num += ft_strlen(strs[i]);
		i++;
	}
	arr = (char *)malloc(sizeof(char) * (num + (i - 1) * ft_strlen(sep)));
	temp = arr;
	j = 0;
	while (j < i)
	{
		ft_strcpy(arr, strs[j]);
		ft_strcpy(arr, sep);
		j++;
	}
	return (temp);
}

