/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeonsan.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 21:52:04 by jyoo              #+#    #+#             */
/*   Updated: 2024/08/21 17:43:38 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	n;
	int	i;

	i = 0;
	n = 1;
	while (str[i] != 0)
	{
		if (str[i] > 64 && str [i] < 91)
			str[i] += 32;
		i++;
	}
	return (str);
}