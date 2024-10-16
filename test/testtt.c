/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeonsan.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 17:16:17 by jyoo              #+#    #+#             */
/*   Updated: 2024/10/17 01:13:02 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t			i;
	unsigned int	src_len;

	src_len = ft_strlen(src);
	i = 0;
	if (size == 0)
		return (src_len);
	while (src[i] != 0 && i + 1 < size)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (src_len);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*temp;

	temp = (char *)calloc(sizeof (char), (ft_strlen(s1) + ft_strlen(s2)));
	ft_strlcpy(temp, s1, ft_strlen(s1) + 1);
	ft_strlcpy(temp + ft_strlen(s1), s2, ft_strlen(s2));
	return (temp);
}

int main ()
{
	int	i;
	
	i = 0;
	while (++i < 10)
		printf("%d", *ft_strjoin("abcde", "defgf") + i);
	return (0);
}
