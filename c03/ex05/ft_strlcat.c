/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeonsan.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 14:49:08 by jyoo              #+#    #+#             */
/*   Updated: 2024/08/21 17:11:23 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;	
	return (i);
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	de_size;
	unsigned int	sr_size;
	int	i;

	i = 0;
	de_size = ft_strlen(dest);
	sr_size = ft_strlen(src);
	while (de_size + i + 1 < size && src[i] != 0)
	{
		dest[de_size + i] = src[i];
		i++;
	}
	dest[de_size + 1] = '\0';
	if (de_size < size)
		return (de_size + sr_size);
	else 
		return (sr_size + size);
}
