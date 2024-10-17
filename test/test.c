/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeonsan.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 20:11:16 by jyoo              #+#    #+#             */
/*   Updated: 2024/10/17 20:23:45 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

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

char	*ft_strdup(const char *src)
{
	char	*copy;
	char	*temp;

	temp = (char *)src;
	copy = (char *)malloc(sizeof(char) * ft_strlen(temp) + 1);
	ft_strlcpy(copy, (char *)src, ft_strlen(temp) + 1);
	return (copy);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*temp;
	size_t	len;
	size_t	i;
	size_t	j;

	len = ft_strlen(s1);
	if (len == 0)
		return (0);
	temp = ft_strdup(s1);
	i = -1;
	while (set[++i])
	{
		if (s1[i] != set[i])
			break ;
		temp++;
	}
	j = -1;
	while (set[++j])
	{
		if (s1[len - j - 1 - i] == set[j])
			break ;
		temp[len - j - 1 - i] = '\0';
	}
	return (temp);
}


int main ()
{
	int	i;
	
	i = 0;
	while (++i < 10)
		printf("%s\n", ft_strtrim("qwerwwq", "qw"));
	return (0);
}
