/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeonsan.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 18:39:47 by jyoo              #+#    #+#             */
/*   Updated: 2024/08/17 20:04:37 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr.c(char *str, char *to_find)
{
	int	i;
	int	n;
	int *p = NULL;

	i = 0;
	n = 0;
	while(str[i] != to_find)
		i++;
		if(str[i] == '\0')
			return (p);
	while(to_fint[n] == '\0')
	{
		str[i + n] = to_find[n];
		n++;
	}
	return (str);
}
