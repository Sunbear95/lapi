/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeonsan.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 17:00:03 by jyoo              #+#    #+#             */
/*   Updated: 2024/08/25 23:19:48 by jyoo             ###   ########.fr       */
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
	int		num;
	char	*temp;
	char	*arr; 
	
	if(size <= 0)
		return ("");
	num = 0;
	i = 0;
	while(i < size)
	{
		num += ft_strlen(strs[i]);
		i++;
	}
	arr = (char *)malloc(sizeof(char) * (num + (i - 1) * ft_strlen(sep)));
	temp = arr;
	i = 0;
	while (i < size)
	{
		ft_strcpy(arr, strs[i]);
		ft_strcpy(arr, sep);
		i++;
	}
	return (temp);
}
