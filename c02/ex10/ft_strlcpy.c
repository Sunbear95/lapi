/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeonsan.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 15:40:45 by jyoo              #+#    #+#             */
/*   Updated: 2024/08/22 10:43:06 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlen(char *str)
{
	unsigned int	leng;

	leng = 0;
	while (str [leng] != 0)
		leng++;
	return (leng);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_leng;

	src_leng = ft_strlen(src);
	i = 0;
	if (size > 0)
	{
		while (src[i] != 0 && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = 0;
	}
	return (src_leng);
}
