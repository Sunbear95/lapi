/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dongwki2 <dongwㅑki2@student.42.fr>          +#+  +:+       +#+      */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 15:38:00 by dongwki2          #+#    #+#             */
/*   Updated: 2024/08/22 10:43:20 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int	length;

	length = 0;
	while (str[length] != 0)
	{
		length++;
	}
	return (length);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_len;

	src_len = ft_strlen(src);
	i = 0;
	if (size == 0)
		return (src_len);
	while (src[i] != 0 && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	if (size > 0)
		dest[i] = 0;
	return (src_len);
}
