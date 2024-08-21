/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeonsan.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 18:47:42 by jyoo              #+#    #+#             */
/*   Updated: 2024/08/21 20:29:25 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

/*char	*ft_rev(char *str, int position)
{
	char	temp;
	int		i;

	i = 0;
	temp = 0;
	while (i < position / 2)
	{
		temp = str[i];
		str[i] = str[position - 1 - i];
		str[position - 1 - i] = temp ;
		i++;
	}
	return (str);
}*/

char	*hex_str(char *str, int i, char *temp_arr)

{
	char	hex[2];
	int		position;
	int		temp;

	hex[0] = '0';
	hex[1] = '0';
	temp = 0;
	position = 0;
	while (1)
	{
		temp = str[i] % 16;
		if (temp < 10)
			hex[position] = temp + '0';
		else
			hex[position] = 'A' + (temp - 10);
		str[i] /= 16;
		position ++;
	}
	temp_arr[0] = hex[1];
	temp_arr[1] = hex[0];
	return (temp_arr);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	temp_arr[2];
	char	*p;

	temp_arr[0] = '0';
	temp_arr[1] = '0';
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			p = hex_str(str, i, temp_arr);
			write (1, "\\", 1);
			write (1, p, 1);
			write (1, p + 1, 1);
			i++;
		}
		write (1, &str[i], 1);
	}
}
