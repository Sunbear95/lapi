/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jyoo <jyoo@student.42gyeonsan.kr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 18:47:42 by jyoo              #+#    #+#             */
/*   Updated: 2024/08/22 12:56:36 by jyoo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

unsigned char	*offset_arr(unsigned char *str, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		str[i] = 0;
		i++;
	}
	return (str);
}

unsigned char	*hex_str(char *str, int i, unsigned char *temp_arr)
{
	int				temp;
	unsigned char	c;

	c = str[i];
	temp = c / 16;
	if (temp < 10)
		temp_arr[0] = temp + '0';
	else
		temp_arr[0] = 'a' + (temp - 10);
	temp = c % 16;
	if (temp < 10)
		temp_arr[1] = temp + '0';
	else
		temp_arr[1] = 'a' + (temp - 10);
	return (temp_arr);
}

void	ft_putstr_non_printable(char *str)
{
	int				i;
	unsigned char	temp_arr[3];

	i = 0;
	offset_arr(temp_arr, 3);
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			offset_arr(temp_arr, 3);
			hex_str(str, i, temp_arr);
			write (1, "\\", 1);
			write (1, &temp_arr[0], 1);
			write (1, &temp_arr[1], 1);
		}
		else
		{
			write (1, &str[i], 1);
		}
		i++;
	}
}
